# NUDL Versioning

NUDL uses a language version and a compiler version.

- Language version defines syntax and semantic behavior.
- Compiler version identifies an implementation build.
- Library version identifies public standard-library APIs.

Before 1.0, incompatible changes may occur between minor versions; record them in CHANGELOG.md and the language specification. After 1.0, syntax removal or semantic changes require a major version unless covered by a documented deprecation process.

An explicit target-version declaration may be added later. It is not implemented in 0.3.
