# NUDL Roadmap

## 0.3 — Expression foundation
- [x] C++23 expression evaluator.
- [x] Arithmetic precedence, unary operators, parentheses, scientific notation.
- [x] Expression tests and sample.
- [ ] Publish hosted CI result.

## 0.4 — Language front end
- [ ] Source locations and structured diagnostics.
- [ ] Token stream with identifiers, keywords, literals, punctuation.
- [ ] Module and declaration parser.
- [ ] Parse-only command for complete source files.
- [ ] Golden parser tests.

## 0.5 — Typed values
- [ ] Integer, real, boolean, string, null, array, record values.
- [ ] Type checker and explicit conversion rules.
- [ ] Scope and name resolution.

## 0.6 — Native data model
- [ ] Schema and record declarations.
- [ ] Dataset and table runtime structures.
- [ ] Key, reference, and constraint validation.
- [ ] Deterministic in-memory query primitives.

## 0.7 — Standard library
- [ ] Core, strings, collections, math, statistics, algorithms.
- [ ] Stable public API and version policy.
- [ ] Unit tests for each library.

## 0.8 — Tooling
- [ ] Formatter and linter.
- [ ] Language server prototype.
- [ ] Editor syntax definitions.
- [ ] Package metadata and reproducible builds.

## 1.0 release gates
- Complete normative specification.
- Parser and semantic conformance suite.
- Security review for file, network, and system APIs.
- Versioned compatibility policy and release artifacts.
