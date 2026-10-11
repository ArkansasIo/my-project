# NUDL Error Model (Draft)

## Three failure categories
1. Compile diagnostics: lexical, syntax, import, type, and semantic errors.
2. Expected runtime outcomes: Result<T,E> and Option<T>.
3. Exceptional host/runtime faults: resource exhaustion, I/O failure, unavailable capability, or internal runtime failure.

## Diagnostic fields
A diagnostic should carry a stable code, severity, message, source path, start/end byte offsets, line/column span, and optional notes with related spans.

## Example codes
- NUDL-L001: invalid character or malformed literal.
- NUDL-P001: unexpected token.
- NUDL-P002: expected closing delimiter.
- NUDL-M001: module not found.
- NUDL-T001: type mismatch.
- NUDL-T002: unknown identifier.
- NUDL-R001: division by zero.
- NUDL-R002: index out of range.
- NUDL-C001: required capability is absent.

Codes are draft identifiers and must not be treated as stable API until frozen in a release.
