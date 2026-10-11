# NUDL Syntax Catalog (Draft)

This catalog lists the major syntactic elements planned for NUDL. It is not a claim of compiler support.

## File and module elements
- Module declaration: module qualified.path;
- Import: import qualified.path; and import qualified.path as alias;
- Package declarations and dependency metadata: future manifest specification.
- Visibility: pub and private.

## Declaration elements
- Binding: let, var, const.
- Alias: type Name = ExistingType;
- Value structure: struct Name { field: Type; }
- Identity object: class Name { field and method declarations }
- Closed alternatives: enum Name { CaseA, CaseB }
- Payload alternatives: union Name { CaseA(Type), CaseB }
- Behavior contract: trait Name { function signatures }
- Implementation: impl Trait for Type { methods }
- Function: fn name(parameters) -> ReturnType { body }
- Async function: async fn name(...) -> Task<T> { body } (Task semantics not frozen).
- Native data: dataset and table declarations (separate data-model specification).

## Type elements
- Primitive: Boolean, Int32, Float64, String, Bytes, Timestamp, Duration.
- Generic: Array<T>, Map<K,V>, Result<T,E>.
- Tuple: (A, B, C).
- Function: fn(A, B) -> C.
- Optional: Option<T>.
- Constrained generic: fn sort<T: Ordered>(values: Array<T>) -> Array<T>.
- Nested: Array<Array<T>>, Map<String, Array<RecordType>>.
- User-defined: type alias, struct, class, enum, union, trait.

## Expression elements
- Literal, identifier, parenthesized expression.
- Unary arithmetic and logical expression.
- Binary arithmetic, comparison, logical, range expression.
- Function call, member access, index access, slice.
- Array and tuple literals.
- Record construction.
- Match expression (syntax and exhaustiveness rules still draft).

## Statement elements
- Block, local declaration, expression statement.
- if/else, while, for-in, loop.
- return, break, continue.
- match, defer.
- try/catch/finally is proposed for exceptional faults; expected failures should normally use Result<T,E>.

## Metadata elements
- Annotation: @test, @deprecated, @entry, @derive(...).
- Constraints: where clauses and requires declarations.
- Source comments and documentation comments (documentation comment format not frozen).

## Operators
Arithmetic + - * / %; comparisons == != < <= > >=; logical and/or/not; member .; index []; range ..; type test is; explicit conversion as. Final spellings and precedence must be frozen before 0.4 conformance.
