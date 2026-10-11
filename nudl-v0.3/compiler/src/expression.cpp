#include "nudl/expression.hpp"

#include <cctype>
#include <cmath>
#include <cstdlib>
#include <stdexcept>
#include <string>

namespace nudl {
namespace {

class Parser {
public:
    explicit Parser(std::string_view source) : source_(source) {}

    double parse() {
        skip_space();
        if (at_end()) fail("empty expression");
        const double value = expression();
        skip_space();
        if (!at_end()) fail("unexpected trailing token");
        if (!std::isfinite(value)) fail("result is not finite");
        return value;
    }

private:
    std::string_view source_;
    std::size_t pos_ = 0;

    bool at_end() const { return pos_ >= source_.size(); }
    char peek() const { return at_end() ? '\0' : source_[pos_]; }
    void skip_space() {
        while (!at_end() && std::isspace(static_cast<unsigned char>(peek()))) ++pos_;
    }
    [[noreturn]] void fail(const char* message) const {
        throw std::runtime_error(std::string(message) + " at byte " + std::to_string(pos_));
    }
    bool consume(char c) {
        skip_space();
        if (peek() != c) return false;
        ++pos_;
        return true;
    }

    double expression() {
        double value = term();
        for (;;) {
            if (consume('+')) value += term();
            else if (consume('-')) value -= term();
            else return value;
        }
    }

    double term() {
        double value = unary();
        for (;;) {
            if (consume('*')) value *= unary();
            else if (consume('/')) {
                const double divisor = unary();
                if (divisor == 0.0) fail("division by zero");
                value /= divisor;
            } else return value;
        }
    }

    double unary() {
        if (consume('+')) return unary();
        if (consume('-')) return -unary();
        return primary();
    }

    double primary() {
        skip_space();
        if (consume('(')) {
            const double value = expression();
            if (!consume(')')) fail("expected ')'");
            return value;
        }
        return number();
    }

    double number() {
        skip_space();
        const std::size_t start = pos_;
        bool digits_before = false;
        while (std::isdigit(static_cast<unsigned char>(peek()))) {
            digits_before = true;
            ++pos_;
        }
        bool digits_after = false;
        if (peek() == '.') {
            ++pos_;
            while (std::isdigit(static_cast<unsigned char>(peek()))) {
                digits_after = true;
                ++pos_;
            }
        }
        if (!digits_before && !digits_after) fail("expected numeric literal");

        if (peek() == 'e' || peek() == 'E') {
            ++pos_;
            if (peek() == '+' || peek() == '-') ++pos_;
            const std::size_t exponent_start = pos_;
            while (std::isdigit(static_cast<unsigned char>(peek()))) ++pos_;
            if (pos_ == exponent_start) fail("expected exponent digits");
        }

        const std::string text(source_.substr(start, pos_ - start));
        char* end = nullptr;
        const double value = std::strtod(text.c_str(), &end);
        if (end == text.c_str() || *end != '\0' || !std::isfinite(value))
            fail("invalid or non-finite numeric literal");
        return value;
    }
};

} // namespace

double evaluate_expression(std::string_view source) {
    return Parser(source).parse();
}

} // namespace nudl
