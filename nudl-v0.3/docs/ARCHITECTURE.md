# NUDL 0.3 Architecture

## Scope
NUDL is an independent language and native data model. JSON, CSV, SQL, spreadsheets, and CSS are inspiration only, not embedded syntaxes or required dependencies.

## Current implementation
- compiler/src/expression.cpp: expression tokenizer, parser, and evaluator.
- compiler/src/main.cpp: command-line expression evaluation.
- compiler/include/nudl/expression.hpp: public expression API.
- tests/test_expression.cpp: expression behavior tests.
- grammar/NUDL-0.3.ebnf: implemented expression subset.

Other examples are design proposals, not syntax accepted by the compiler.

## Intended layers
1. Source reader and diagnostics.
2. Lexer and syntax parser.
3. Typed syntax tree.
4. Name resolution and semantic validation.
5. Interpreter/runtime values.
6. Standard library modules.
7. Optional native code generation and host integration.

## Design principles
- deterministic parsing and diagnostics;
- explicit types and constraints;
- predictable numeric semantics;
- bounded resources for untrusted input;
- versioned grammar and compatibility rules;
- no hidden conversion to unrelated formats.
