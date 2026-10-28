# C Algorithm Cookbook

A practical collection of reusable C patterns. Copy a pattern into your assignment, then adapt variable names, input format, and required output.

## How to use
1. Read the problem and identify the data type: number, array, matrix, string, or struct.
2. Find the closest pattern in this folder.
3. Keep the algorithm, but adapt input/output to the exact prompt.
4. Test normal cases, edge cases (n=1, duplicates, zero, negative values), and required output formatting.

## Contents
- `00_template.c` — basic program skeleton
- `01_input_output.c` — read n numbers, print array
- `02_array_basics.c` — sum, min/max, count, reverse, copy
- `03_searching.c` — linear search and binary search
- `04_sorting.c` — bubble, selection, insertion sort
- `05_math.c` — prime, GCD, LCM, digit sum, reverse integer
- `06_matrix.c` — input/print, row sums, transpose (square matrix)
- `07_string.c` — safe line input, length, vowels, reverse, palindrome
- `08_functions_recursion.c` — functions, factorial, Fibonacci
- `09_struct.c` — array of structs, total score, find by ID, sort by total
- `10_pointers_dynamic.c` — swap by pointer, dynamic array allocation

## Important
- These are standalone examples. Each `.c` file may have its own `main()`, so compile one file at a time.
- In assignments with a provided `main()` or required function signature, do not replace the required scaffold; copy only the relevant function/logic.
- `scanf("%s", ...)` reads one word only. Use `fgets()` for a full line.
- Binary search requires a sorted array.
- Array examples use fixed maximum sizes for clarity; validate `n` before using it.
- `qsort()` is intentionally not used so the basic sorting algorithms stay visible.
