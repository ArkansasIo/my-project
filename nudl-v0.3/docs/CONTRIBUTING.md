# Contributing to NUDL

## Workflow
1. Read spec/NUDL-0003.md and docs/ARCHITECTURE.md.
2. Keep proposed features separate from implemented features.
3. Add or update tests with every behavior change.
4. Use C++23 and standard-library facilities unless a dependency is approved.
5. Include diagnostics for invalid input; do not silently coerce values.
6. Update the changelog and specification when behavior changes.

## Pull request checklist
- [ ] Scope and compatibility impact are documented.
- [ ] Tests cover normal and error paths.
- [ ] Build instructions work on a clean checkout.
- [ ] No generated binaries, credentials, or machine-specific files.
- [ ] New syntax is added to the grammar and examples.

Use lowercase snake_case for filenames and function names. Public C++ headers live under compiler/include/nudl/. NUDL source files use the .nudl extension.
