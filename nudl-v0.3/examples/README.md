# NUDL 0.3 Example Collection

These examples define a consistent proposed native syntax for the Nudl Data Format (NUDL). They are language-design fixtures, not JSON/CSV/SQL/XLSX/CSS embedded in NUDL.

## Status key

- **Runnable now:** arithmetic expressions supplied to `nudlc --eval "…"`.
- **Syntax proposal:** illustrative complete-source examples for language features not yet implemented by the 0.3 CLI. They are design targets and will not currently pass through `nudlc` as whole files.

| File | Topic | Status |
|---|---|---|
| `expressions.nudl` | Numeric expressions | Syntax proposal; evaluate expressions using CLI `--eval` |
| `arithmetic.nudl` | Arithmetic and named values | Syntax proposal |
| `datasets.nudl` | Typed records and datasets | Syntax proposal |
| `tables.nudl` | Keys, constraints, relationships | Syntax proposal |
| `style.nudl` | Native presentation metadata | Syntax proposal |
| `library.nudl` | Native module/library declarations | Syntax proposal |
| `validation.nudl` | Validation rules and invariants | Syntax proposal |
| `algorithms.nudl` | Functions and algorithms | Syntax proposal |
| `system.nudl` | Native system configuration | Syntax proposal |

## Try the implemented arithmetic evaluator

From this directory's parent `nudl-v0.3/`:

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/nudlc --eval "2 + 3 * 4"
./build/nudlc --eval "(2 + 3) * 4"
./build/nudlc --eval "1.5e2 / 3"
```

Expected results: `14`, `20`, and `50`.

## Important

Do not treat the syntax-proposal files as proof that those language features have already been implemented. They document the intended NUDL design so that later parser, type-checker, runtime, and standard-library work can be driven by explicit examples.
