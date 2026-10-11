# NUDL Abstract Syntax Tree Design (Draft)

## Goals
The AST must preserve source locations, distinguish syntax from semantic facts, and support stable diagnostics. Parsing must never execute a program.

## Node families
- SourceUnit: file identity, module declaration, imports, top-level declarations.
- Declaration: BindingDecl, FunctionDecl, TypeAliasDecl, StructDecl, ClassDecl, EnumDecl, UnionDecl, TraitDecl, ImplDecl, DatasetDecl, TableDecl.
- TypeSyntax: NamedType, GenericType, TupleType, FunctionType, OptionType, ResultType, ArrayType.
- Statement: BlockStmt, BindingStmt, ExprStmt, IfStmt, WhileStmt, ForStmt, ReturnStmt, BreakStmt, ContinueStmt, MatchStmt, DeferStmt.
- Expression: LiteralExpr, NameExpr, UnaryExpr, BinaryExpr, CallExpr, MemberExpr, IndexExpr, SliceExpr, ArrayExpr, TupleExpr, RecordExpr, MatchExpr.
- Pattern: WildcardPattern, BindingPattern, LiteralPattern, EnumCasePattern, UnionCasePattern, TuplePattern.
- Metadata: AnnotationNode and ConstraintNode.

## Source spans
Each node should carry a source span with file ID and half-open byte offsets [start,end). A line map translates byte offsets into human-readable line/column. UTF-8 column counting policy must be specified.

## Separation of phases
1. Lexical analysis creates tokens.
2. Parsing creates syntax-only AST nodes.
3. Name resolution attaches symbol references.
4. Type checking attaches inferred/declared types.
5. Lowering produces an execution representation.
6. Runtime executes only validated lowered programs.

Do not store mutable runtime values directly inside syntax nodes. AST design is proposed and no complete-source AST is implemented in compiler 0.3.
