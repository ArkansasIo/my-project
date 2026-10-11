#include "nudl/expression.hpp"

#include <cmath>
#include <iostream>
#include <stdexcept>
#include <string_view>

namespace {
int failures = 0;
void expect_near(std::string_view source, double expected) {
    try {
        const double actual = nudl::evaluate_expression(source);
        if (std::abs(actual - expected) > 1e-10) {
            std::cerr << "FAIL: " << source << " expected " << expected << " got " << actual << '\n';
            ++failures;
        }
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << source << " threw " << e.what() << '\n';
        ++failures;
    }
}
void expect_error(std::string_view source) {
    try {
        (void)nudl::evaluate_expression(source);
        std::cerr << "FAIL: expected error for " << source << '\n';
        ++failures;
    } catch (const std::exception&) {}
}
}

int main() {
    expect_near("2 + 3 * 4", 14);
    expect_near("(2 + 3) * 4", 20);
    expect_near("-3 + 10 / 2", 2);
    expect_near("1.5e2 / 3", 50);
    expect_near("-(2 + 4) * +2", -12);
    expect_error("");
    expect_error("1 / 0");
    expect_error("(1 + 2");
    expect_error("2 +");
    expect_error("1 2");
    if (failures != 0) return 1;
    std::cout << "NUDL 0.3 expression tests passed\n";
    return 0;
}
