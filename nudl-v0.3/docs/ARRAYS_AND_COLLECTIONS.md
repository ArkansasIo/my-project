# NUDL Arrays and Collections (Draft)

## Array<T>
Fixed-length, ordered sequence. Proposed literal: [first, second, third]. Indexes start at zero. A runtime must define bounds checks and allocation limits.

## List<T>
Resizable ordered sequence. Insertions/removals may invalidate references; exact invalidation rules must be specified.

## Map<K,V>
Associative key-value collection. Key equality and hashing must be stable. Iteration order must either be guaranteed or explicitly unspecified.

## Set<T>
Unique values according to a defined equality relation. Iteration order must be specified or marked unspecified.

## Tuple<T...>
Fixed arity, heterogeneous value. Each slot has a statically known type.

## Nested arrays
Array<Array<T>> represents a sequence of arrays and may be ragged. A dedicated Tensor<T, Rank> may be added for rectangular numeric data.

## Slices and ranges
A slice uses half-open bounds [start..end). Range endpoints, inclusive/exclusive behavior, overflow, negative indexes, and mutation during iteration must be specified before stable conformance.

## Mutation
Collection mutation is permitted only through mutable bindings or explicitly mutable references. Borrowing, aliasing, and ownership rules remain unresolved; examples are illustrative, not a guarantee of alias safety.
