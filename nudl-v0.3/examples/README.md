# NUDL Examples

These examples illustrate proposed language features: types, structures, classes, traits, generic functions, nested arrays, collections, control flow, modules, errors, and nested domain models.

They are not all runnable under compiler 0.3. The current compiler evaluates arithmetic expressions only. Treat examples as design artifacts until parser, type checker, and runtime support lands.

| File | Topic |
| --- | --- |
| expressions.nudl | Arithmetic expression sample |
| arithmetic.nudl | Arithmetic and named values |
| datasets.nudl | Typed records and datasets |
| tables.nudl | Keys, constraints, relationships |
| style.nudl | Native presentation metadata |
| library.nudl | Native module/library declarations |
| validation.nudl | Validation rules and invariants |
| algorithms.nudl | Functions and algorithms |
| system.nudl | Native system configuration |
| types_and_structures.nudl | Aliases, structs, enums, tagged unions |
| classes_traits.nudl | Classes, methods, traits, implementation blocks |
| arrays_collections.nudl | Arrays, nested arrays, tuples, maps, sets, options |
| functions_generics.nudl | Functions, generic parameters, results |
| control_flow.nudl | Conditions, loops, matching |
| module_layout.nudl | Imports and package layout |
| error_handling.nudl | Typed errors and result handling |
| nested_types.nudl | Nested domain data structures |

## Try the implemented arithmetic evaluator

From nudl-v0.3/:

    cmake -S . -B build
    cmake --build build
    ctest --test-dir build --output-on-failure
    ./build/nudlc --eval "2 + 3 * 4"
    ./build/nudlc --eval "(2 + 3) * 4"
    ./build/nudlc --eval "1.5e2 / 3"

Expected results: 14, 20, and 50.

Do not treat syntax-proposal files as proof that features are implemented. They document intended design for future parser, type-checker, runtime, and standard-library work.
