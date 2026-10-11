# ArkansasIo / my-project

This repository contains the **NUDL (Nudl Data Format)** language work and the initial NDF internet-data test fixture.

## NUDL 0.3

The current versioned implementation is in [nudl-v0.3/](nudl-v0.3/README.md). It introduces an experimental arithmetic expression evaluator written in C++23, a draft expression specification and grammar, and automated tests.

- [NUDL 0.3 README](nudl-v0.3/README.md)
- [NUDL-0003 expression-core specification](nudl-v0.3/spec/NUDL-0003.md)
- [NUDL 0.3 grammar](nudl-v0.3/grammar/NUDL-0.3.ebnf)
- [Expression evaluator source](nudl-v0.3/compiler/src/expression.cpp)
- [Expression tests](nudl-v0.3/tests/test_expression.cpp)

Build the v0.3 expression module from its directory:

```sh
cd nudl-v0.3
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/nudlc --eval "(2 + 3) * 4"
```

## NDF internet data package fixture

The earlier test fixture is under [tests/ndf-internet-package/](tests/ndf-internet-package/). It is a separate draft artifact; NDF and NUDL names should not be treated as interchangeable without a deliberate specification decision.

## Status

NUDL 0.3 is an experimental language milestone, not a complete interpreter. Named variables, full-file parsing for the illustrative EXPRESSION block, static type checking, the dataset runtime, package manager, and VM remain future work. The format is native; JSON, CSV, SQL, spreadsheets, and CSS are inspirations only, not export targets.