# NUDL Command-Line Interface

The current nudlc executable is experimental and evaluates arithmetic expressions only.

## Build
From nudl-v0.3/:

    cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
    cmake --build build

## Current commands
Evaluate an expression:

    ./build/nudlc --eval "(2 + 3) * 4"

Expected output: 20.

Show usage:

    ./build/nudlc --help

The accepted flags are defined by compiler/src/main.cpp. Complete .nudl modules are not yet compiled by this version. Proposal examples document intended syntax and are not runnable programs.
