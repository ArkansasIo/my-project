# NUDL Language Reference (Draft)

## Declaration forms
    module game.entities;
    import nudl.math as math;

    const MAX_LEVEL: Int32 = 100;
    let initial_level: Int32 = 1;
    var active_players: Int32 = 0;

## Types and compound values
    type UserId = UInt64;

    struct Vec2 {
        x: Float64;
        y: Float64;
    }

    enum Faction { North, South, Neutral }

    union Message {
        Text(String),
        Number(Int64),
        Shutdown
    }

    let matrix: Array<Array<Float64>> = [[1.0, 2.0], [3.0, 4.0]];

## Functions
    pub fn add(left: Int32, right: Int32) -> Int32 {
        return left + right;
    }

    fn normalize(value: Float64, low: Float64, high: Float64) -> Float64 {
        return (value - low) / (high - low);
    }

## Classes and traits
    trait Identified {
        fn id(self) -> UInt64;
    }

    class Entity {
        private id_value: UInt64;
        pub fn id(self) -> UInt64 {
            return self.id_value;
        }
    }

## Control flow
    if active_players > 0 {
        active_players = active_players - 1;
    } else {
        active_players = 0;
    }

    for level in 1..MAX_LEVEL {
        // loop body
    }

## Status
These forms describe proposed NUDL syntax. Compiler 0.3 only evaluates arithmetic expressions; it does not compile complete modules or these declarations yet. Consult NUDL-0004 for the normative direction and unresolved semantics.
