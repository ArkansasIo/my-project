# NUDL Tests

The current automated test executable covers the arithmetic expression evaluator. The .nudl files in examples/ and stdlib/ are proposals unless marked runnable in their local README.

## Build and run

    cmake -S . -B build
    cmake --build build
    ctest --test-dir build --output-on-failure

Future parser, semantic, runtime, and library tests should be added as independent test targets. Tests must include successful behavior and invalid-input cases.
