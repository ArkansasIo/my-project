# NUDL 0.3 — Nudl Data Format

NUDL is a native data language with its own syntax and semantics. It is inspired by ideas from structured data, tables, typed records, declarative constraints, and style systems, but it is not JSON/CSV/SQL/XLSX/CSS and does not use those formats as its runtime representation.

## Version 0.3 scope

This release adds an experimental arithmetic-expression core as a separately buildable C++23 module. It supports numeric literals, parentheses, unary signs, and the operators `+`, `-`, `*`, and `/` with conventional precedence. Division by zero and malformed expressions are errors.

The expression evaluator is a compiler foundation, not yet a full NUDL interpreter. Dataset parsing and semantic validation from the 0.2 line remain part of the broader project; this subdirectory is independently buildable to keep the new expression engine easy to test.

## Build

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/nudlc --eval "(2 + 3) * 4"
./build/nudlc --eval "10 / 2 + 7"
```

## Native expression examples

```nudl
NUDL 0.3
EXPRESSION "damage_scale"
  VALUE (base_damage + bonus_damage) * multiplier
END
```

The block above illustrates the intended future source syntax. The current experimental CLI evaluates arithmetic expressions supplied with `--eval`; named variables and full file parsing are not implemented in this milestone.

## Current limitations

- No named variables, functions, module imports, or static type checker yet.
- No dataset runtime, bytecode VM, or package manager in this subdirectory.
- No JSON, CSV, SQL, spreadsheet, or CSS export layer by design.
- Floating-point arithmetic uses C++ `double`; exact decimal arithmetic is not implemented.

See `spec/NUDL-0003.md` and `grammar/NUDL-0.3.ebnf`.


## Expanded language design

The repository now includes a draft grammar and broad language design for the next version:

- [NUDL 0004 specification](spec/NUDL-0004.md)
- [Proposed 0.4 EBNF grammar](grammar/NUDL-0.4.ebnf)
- [Syntax catalog](docs/SYNTAX_CATALOG.md)
- [Language reference](docs/LANGUAGE_REFERENCE.md)
- [Type system](docs/TYPE_SYSTEM.md)
- [Modules and packages](docs/MODULE_SYSTEM.md)
- [AST design](docs/AST_DESIGN.md)
- [Arrays and collections](docs/ARRAYS_AND_COLLECTIONS.md)
- [Runtime and memory](docs/MEMORY_AND_RUNTIME.md)
- [Error model](docs/ERROR_MODEL.md)
- [Annotations and attributes](docs/ANNOTATIONS_AND_ATTRIBUTES.md)
- [Implementation status](docs/IMPLEMENTATION_STATUS.md)
- [Expanded examples](examples/README.md)
- [Standard-library proposals](stdlib/README.md)

These documents specify intended syntax and behavior. Compiler 0.3 still implements arithmetic expression evaluation only; the complete module language, type system, classes, collections, and standard library require implementation and tests.
