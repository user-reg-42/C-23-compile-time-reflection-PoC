# OURCC — C++23 Compile-Time Reflection POC

Pure C++23 — zero runtime overhead.

- Type name extraction at compile time
- Concepts for type safety
- Static binary — Alpine compatible

**The dragon reflects.**

Compile:

```bash
clang++ -std=c++23 -static main.cpp -o ourcc_poc
./ourcc_poc
