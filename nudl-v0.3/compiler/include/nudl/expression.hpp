#pragma once

#include <string_view>

namespace nudl {

// Evaluate a numeric NUDL expression.
// Throws std::runtime_error for syntax errors, division by zero,
// invalid numeric values, or non-finite results.
double evaluate_expression(std::string_view source);

} // namespace nudl
