## Problem Statement: 

For two strings `str1` and `str2`, we define a string `X` as a **common divisor** if both strings can be formed by concatenating `X` multiple times.

Return the **longest** string `X` that is a common divisor of both `str1` and `str2`. If no such string exists, return `""`.

### Examples
- **Input:** str1 = "ABCABC", str2 = "ABC"  
  **Output:** "ABC"
- **Input:** str1 = "ABABAB", str2 = "ABAB"  
  **Output:** "AB"
- **Input:** str1 = "LEET", str2 = "CODE"  
  **Output:** ""

### Constraints
- 1 ≤ str1.length, str2.length ≤ 1000
- str1 and str2 consist of uppercase English letters.

## Code Explanation

The solution uses a clever mathematical insight:

A string `X` is a common divisor of `str1` and `str2` **if and only if** `str1 + str2 == str2 + str1`.  
This checks whether both strings are made of the same repeating base pattern.

- If the concatenation order matters (`str1+str2 != str2+str1`), no common divisor exists → return `""`.
- Otherwise, the longest common divisor `X` must have length equal to the **GCD** of the lengths of `str1` and `str2`.
- We compute `gcd(len1, len2)` using recursion (Euclidean algorithm).
- Finally, return the prefix of `str1` of length `gcd` (which is the longest possible `X`).

This approach efficiently finds the answer without generating or checking multiple substrings.

## Complexity Analysis

- **Time Complexity (TC):** `O(n + m + log(min(n, m)))`  
  – `n` and `m` for string concatenations and comparison, `log(min(n,m))` for GCD computation.
- **Space Complexity (SC):** `O(n + m)`  
  – For temporary strings during concatenation (required for the check).
