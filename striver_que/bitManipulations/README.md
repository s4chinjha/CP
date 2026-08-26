# Bit Manipulation

## Why Learn Bit Manipulation?

- Optimize computations
- Solve XOR based problems
- Used in Graphs, DP, Tries
- Frequently asked in interviews
- Useful in Competitive Programming

---

# Prerequisites

- Binary Number System
- Decimal ↔ Binary Conversion
- Powers of Two

---

# Operators

## AND (&)

Definition

Truth Table

Example

Common Uses

Complexity

---

## OR (|)

Definition

Truth Table

Example

Common Uses

---

## XOR (^)

Definition

Truth Table

Properties

Example

Applications

---

## NOT (~)

Definition

Example

Two's Complement Explanation

---

## Left Shift (<<)

Formula

Examples

Applications

---

## Right Shift (>>)

Formula

Examples

Applications

---

# Common Bit Tricks

## Check Odd/Even

Formula

Example

Time Complexity

---

## Check ith Bit

Formula

Example

---

## Set ith Bit

Formula

Example

---

## Clear ith Bit

Formula

Example

---

## Toggle ith Bit

Formula

Example

---

## Count Set Bits

Naive

Brian Kernighan

Built-in Function

---

## Check Power of Two

Formula

Explanation

Example

---

# XOR Properties

a ^ a = 0

a ^ 0 = a

Commutative

Associative

---

# Built-in Functions (C++)

__builtin_popcount()
__builtin_popcountll()
__builtin_clz()
__builtin_ctz()
__builtin_parity()
---

# Patterns

Pattern 1
Single Number

Pattern 2
Missing Number

Pattern 3
Power of Two

Pattern 4
Subset Generation

Pattern 5
Bitmask DP

---

# Problems Solved

| # | Problem | Difficulty | Status |
|---|---------|------------|--------|
| 1 | Check ith Bit | Easy | ✅ |
| 2 | Set ith Bit | Easy | ✅ |
| 3 | Toggle ith Bit | Easy | ✅ |

---

# Mistakes

- Forgetting operator precedence
- Using signed integers with >>
- Confusing XOR and OR
- Indexing bits from 0 instead of 1

---

# Complexity Cheat Sheet

| Operation | Complexity |
|-----------|------------|
| AND | O(1) |
| OR | O(1) |
| XOR | O(1) |
| Shift | O(1) |
| Check Bit | O(1) |
| Set Bit | O(1) |

---

# Interview Notes

Most Asked Questions

- Single Number
- Power of Two
- Counting Bits
- Missing Number
- Reverse Bits