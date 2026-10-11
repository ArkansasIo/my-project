# NUDL Type System (Draft)

## Type categories
- Scalar: Boolean, signed and unsigned fixed-width integers, Float32, Float64, Decimal, Char, String, Bytes, Duration, Timestamp.
- Unit and Never: no meaningful value and no-returning computation.
- Aggregate: Tuple, Array, List, Map, Set, Range.
- Algebraic: enum and tagged union.
- User-defined: type alias, struct, class, trait.
- Result types: Option<T> and Result<T,E>.

## Rules proposed
1. Names are case-sensitive.
2. No implicit conversion from text to number or between unrelated types.
3. Public function signatures should state parameter and return types.
4. Generic type arguments are checked at compile time.
5. Option<T> models absence; null is only a literal and must be typed explicitly.
6. Numeric overflow behavior must be explicit per type and operation.
7. Array indexes are Int64 and zero-based.
8. Map keys must implement a stable hash/equality contract; ordered maps require an ordering contract.
9. Recursive value types must be boxed or otherwise have finite layout.
10. Class identity and struct value semantics must not be conflated.

## Still unresolved
The exact inference algorithm, variance, trait coherence, borrowing/ownership, numeric literal default type, decimal precision, floating-point reproducibility, and binary layout require a versioned normative decision. These rules are not implemented in compiler 0.3.
