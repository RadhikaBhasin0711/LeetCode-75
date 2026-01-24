## Problem Statement: 

You are given a string `s`, which contains stars `*`.

In one operation, you can:
- Choose a star in `s`.
- Remove the **closest non-star character** to its **left**, as well as remove the star itself.

Return the string after all stars have been removed.

**Note:**
- The input will be generated such that the operation is always possible.
- It can be shown that the resulting string will always be **unique**.

### Examples
- **Input:** s = "leet**cod*e"  
  **Output:** "lecoe"  
  Explanation:  
  - Remove 't' and first * → "lee*cod*e"  
  - Remove 'e' and second * → "lecod*e"  
  - Remove 'd' and third * → "lecoe"

- **Input:** s = "erase*****"  
  **Output:** ""  
  Explanation: All characters are eventually removed.

### Constraints
- 1 ≤ s.length ≤ 10⁵
- s consists of lowercase English letters and stars '*'
- The operation is always possible (no star without a left character to remove)

## Code Explanation

This solution uses a **stack-based approach** (or string builder) to simulate the removal process efficiently:

1. Initialize an empty string `ans` (acts as a stack-like builder)
2. Iterate through each character `ch` in `s` (left to right):
   - If `ch` is **not** a star → add it to `ans`
   - If `ch` is a star (`*`) → remove the **last added character** from `ans` (if `ans` is not empty)  
     → This simulates removing the closest non-star character to the left of the star
3. After processing all characters, `ans` contains the final string (in correct order)
4. Return `ans`

## Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - Single pass through the string  
  - Each character is added/removed at most once

- **Space Complexity (SC):** `O(n)`  
  - Worst case: result string stores up to n characters (no stars)

