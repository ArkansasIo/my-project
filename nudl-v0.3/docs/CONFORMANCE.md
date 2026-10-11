# NUDL 0.3 Conformance

## Implemented expression subset
The current evaluator is intended to support:
- decimal and scientific-notation numeric literals;
- unary plus and minus;
- binary addition, subtraction, multiplication, and division;
- parentheses and standard arithmetic precedence;
- errors for empty input, malformed expressions, missing parentheses, trailing tokens, and division by zero.

## Not implemented
- complete .nudl module parsing;
- schemas, records, datasets, and tables;
- type checking and name resolution;
- function declarations and calls;
- standard library execution;
- style/theme execution;
- network, GPU, or hardware APIs.

A passing arithmetic test suite does not imply that the full proposal language is implemented.
