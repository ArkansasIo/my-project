# NUDL Implementation Status

## Implemented in 0.3
- C++23 command-line program.
- Arithmetic expression parser/evaluator.
- Addition, subtraction, multiplication, division, unary signs, parentheses, scientific notation.
- Tests for arithmetic precedence and invalid expressions.

## Specification and example only
- Modules and imports.
- Constants, variables, type aliases, structs, classes, traits, enums, unions.
- Generic types and generic functions.
- Arrays, nested arrays, maps, sets, tuples, ranges.
- Control flow and pattern matching.
- Native datasets, tables, constraints, and queries.
- Standard library declarations.
- File, network, process, GPU, and hardware APIs.
- Package manager, formatter, language server, and native compiler backends.

## Release discipline
Do not label a feature implemented until source is parsed, semantics are defined, runtime/compiler behavior exists, and automated tests cover normal and error paths.
