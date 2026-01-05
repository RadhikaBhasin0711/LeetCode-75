## Problem Statement: 

Given an array of characters `chars`, compress it using the following algorithm:

- For each group of **consecutive repeating characters**:
  - If the group length is 1, append the character.
  - Otherwise, append the character followed by the group's length (as digits).
- Group lengths ≥10 are split into multiple characters (e.g., 12 → '1' then '2').
- Modify the input array `chars` **in-place** and return the new length.

**Note:** Use only **constant extra space**.

### Examples
- **Input:** chars = ["a","a","b","b","c","c","c"]  
  **Output:** 6  
  Modified array: ["a","2","b","2","c","3"]

- **Input:** chars = ["a"]  
  **Output:** 1  
  Modified array: ["a"]

- **Input:** chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]  
  **Output:** 4  
  Modified array: ["a","b","1","2"]

### Constraints
- 1 ≤ chars.length ≤ 2000
- chars[i] is a lowercase English letter, digit, symbol, or space.

## Code Explanation

The solution uses **two pointers**:
- `i`: read pointer to traverse the array and count consecutive characters.
- `write`: write pointer to place compressed output in-place.

For each group of identical characters:
- Count occurrences using the inner while loop.
- Write the character once.
- If count > 1, convert count to string and write each digit.

This ensures in-place modification with O(1) extra space.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – each character is read once and written at most once.
- **Space Complexity (SC):** `O(1)` – only a few integer variables and a temporary string for digits (bounded by log₁₀(n) ≈ 4 digits max).
