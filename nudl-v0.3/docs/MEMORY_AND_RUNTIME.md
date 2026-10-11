# NUDL Memory and Runtime Model (Draft)

## Values
The runtime will distinguish scalar values, immutable value aggregates, mutable collections, and identity-bearing class instances.

## Proposed storage
- Scalars: inline values where practical.
- Structs and tuples: value semantics.
- Class instances: identity semantics, managed references.
- Arrays: contiguous fixed-length storage.
- Lists: resizable sequence.
- Maps and sets: defined equality and iteration guarantees.
- Bytes: opaque byte sequence, not implicitly Unicode text.

## Lifetimes
Compiler 0.4 does not yet define a stable ownership model. The runtime must eventually choose and document deterministic ownership, reference counting, tracing garbage collection, or a clearly defined combination. APIs must not imply that finalizers run at a predictable time.

## Errors and resource limits
The evaluator should support configurable limits for source bytes, token count, nesting depth, allocations, and evaluation steps. Resource exhaustion must produce a diagnostic/runtime error instead of uncontrolled behavior.

## Foreign resources
Files, sockets, processes, GPU buffers, and device handles are external resources. They require explicit capability checks and scoped cleanup. Hardware access is never implied by importing a type definition.
