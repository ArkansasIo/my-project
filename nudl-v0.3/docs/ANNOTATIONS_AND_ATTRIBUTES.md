# NUDL Annotations and Attributes (Draft)

Annotations provide compile-time metadata and must not silently change runtime behavior.

## Proposed standard annotations
- @entry: marks a program entry function.
- @test: marks a test function.
- @deprecated("reason"): marks an API as deprecated.
- @derive(Name): requests a compiler-generated implementation only when the derive is supported.
- @requires_capability(Network): declares a host capability requirement.
- @inline: optimization hint, never a correctness guarantee.
- @doc("text"): optional generated documentation metadata.

## Rules
- Annotation names are case-sensitive.
- Unknown annotations are diagnostics unless a module explicitly declares a metadata namespace.
- Annotation argument types must be constant expressions.
- Security annotations must be checked by the compiler and runtime; comments are not security controls.
- Annotations cannot grant capabilities to an untrusted module.
- Attribute expansion must have deterministic ordering and bounded resource use.

These are proposals; annotations are not implemented in compiler 0.3.
