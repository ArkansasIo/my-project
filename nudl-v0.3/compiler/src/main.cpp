#include "nudl/expression.hpp"

#include <iomanip>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc == 2 && (std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h")) {
        std::cout << "NUDL compiler 0.3.0 (experimental expression evaluator)\n"
                     "Usage: nudlc --eval \"EXPRESSION\"\n";
        return 0;
    }
    if (argc != 3 || std::string(argv[1]) != "--eval") {
        std::cerr << "usage: nudlc --eval \"EXPRESSION\"\n";
        return 2;
    }
    try {
        std::cout << std::setprecision(15) << nudl::evaluate_expression(argv[2]) << '\n';
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "NUDL error: " << e.what() << '\n';
        return 1;
    }
}
