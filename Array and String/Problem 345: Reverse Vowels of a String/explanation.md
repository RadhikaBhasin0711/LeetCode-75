## Problem Statement: 

Given a string `s`, reverse **only all the vowels** in the string and return it.

The vowels are `'a'`, `'e'`, `'i'`, `'o'`, `'u'`, and they can appear in both **lowercase and uppercase**.

### Examples
- **Input:** s = "hello"  
  **Output:** "holle"  
  Explanation: Vowels 'e' and 'o' are reversed → "holle"

- **Input:** s = "leetcode"  
  **Output:** "leotcede"  
  Explanation: Vowels 'e','e','o','e' → reversed to 'e','o','e','e'

- **Input:** s = "aA"  
  **Output:** "aA"  
  Explanation: Both are vowels → reversed remains "aA"

### Constraints
- 1 ≤ s.length ≤ 3 × 10⁴
- `s` consists of printable ASCII characters.

## Code Explanation

The solution uses a **two-pointer approach** to reverse only the vowels in the string:

1. Use two pointers: `start` (left) and `end` (right).
2. Define a string `vowels = "aeiouAEIOU"` to identify vowels (case-sensitive).
3. Move `start` rightward until it points to a vowel.
4. Move `end` leftward until it points to a vowel.
5. **Swap** the vowels at `start` and `end`.
6. Move both pointers inward (`start++`, `end--`).
7. Continue until `start >= end`.
8. Return the modified string.

This ensures:
- Only vowels are swapped.
- Non-vowel characters stay in their original positions.
- Both lowercase and uppercase vowels are handled correctly.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – each character is visited at most twice (once by each pointer).
- **Space Complexity (SC):** `O(1)` – we modify the string in-place (only a few variables used; note: string is copied once in C++ due to pass-by-value, but it's acceptable).
