## Problem Statement: 

Given two strings `s` and `t`, return `true` if `s` is a **subsequence** of `t`, or `false` otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters.

- Example: `"ace"` is a subsequence of `"abcde"` (delete 'b' and 'd')
- Example: `"aec"` is **not** a subsequence of `"abcde"` (order is disturbed)

### Examples
- **Input:** s = "abc", t = "ahbgdc"  
  **Output:** true  
  Explanation: "a b c" appear in order in t (with other chars in between)

- **Input:** s = "axc", t = "ahbgdc"  
  **Output:** false  
  Explanation: 'x' does not appear in t

- **Input:** s = "", t = "ahbgdc"  
  **Output:** true  
  Explanation: Empty string is subsequence of any string

### Constraints
- 0 ≤ s.length ≤ 100
- 0 ≤ t.length ≤ 10⁴
- `s` and `t` consist only of lowercase English letters

## Code Explanation

The solution uses a **two-pointer greedy approach** to check if `s` is a subsequence of `t`:

1. Initialize two pointers:
   - `i` → tracks position in `s` (the subsequence we want to find)
   - `j` → tracks position in `t` (the longer string)

2. Iterate while both pointers are within bounds:
   - If `s[i] == t[j]` → we found a match → move both pointers (`i++`, `j++`)
   - Else → no match → only move `j` forward (skip current char in `t`)

3. After the loop:
   - If `i` reached the end of `s` (`i == s.length()`) → all characters of `s` were found in order → return `true`
   - Otherwise → some characters of `s` are missing → return `false`

This is efficient and works perfectly for checking subsequence without backtracking.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – where `n = t.length()` (single pass through `t`)
- **Space Complexity (SC):** `O(1)` – only two integer pointers used
