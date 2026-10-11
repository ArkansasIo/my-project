# NUDL Standard Library — Proposal

These files specify intended native NUDL APIs; they are not executable library modules in compiler 0.3.

- core/ — primitive types, errors, option/result values.
- math/ — numeric operations and constants.
- strings/ — Unicode-aware string operations.
- collections/ — arrays, maps, sets, iterators.
- data/ — schemas, records, datasets, tables.
- algorithms/ — search, sorting, sequence utilities.
- statistics/ — descriptive statistics.
- time/ — instants, dates, durations, time zones.
- io/ — capability-gated file and byte operations.
- network/ — capability-gated networking.
- system/ — runtime information and host capabilities.

API signatures remain subject to the language specification and conformance tests. No API should be described as implemented until it has runtime/compiler support and automated tests.
