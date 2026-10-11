# NUDL Security Model (Draft)

This model is not yet a complete normative guarantee. Treat the current compiler as a local development tool, not a sandbox for hostile programs.

## Planned rules
- Parsing must not execute source code.
- Parsing and evaluation should have configurable input, nesting, and operation limits.
- File, network, process, and hardware access must be explicit capabilities.
- Standard library modules must document side effects.
- Diagnostics must not expose secrets from host environments.
- Package integrity and origin verification must be defined before remote package installation exists.

## Current limitations
The expression evaluator performs arithmetic only. It does not provide a security sandbox, network client, database engine, GPU execution, or hardware control API. Related example files are proposals.
