# NUDL Module and Package System (Draft)

## Modules
Each module has a qualified path and one source file per module in the initial profile. The module declaration is the first non-comment declaration.

    module studio.render;
    import nudl.math;
    import studio.assets as assets;

## Visibility
Declarations are private by default. Use pub to export a type, function, constant, or module. Private is explicit documentation for non-exported declarations.

## Packages
A package groups modules and declares a package name, version, minimum compiler version, entry modules, and dependency constraints in a future native manifest. The manifest format must itself be specified as NUDL-native metadata, not borrowed wholesale from another format.

## Resolution
- Resolve imports only within declared source roots or installed package roots.
- Reject unresolved imports with source location.
- Detect import cycles and report the cycle path.
- Do not execute module initializers during parse or type checking.
- Runtime initialization order must be deterministic.

## Status
Module syntax and package resolution are proposed and are not implemented in compiler 0.3.
