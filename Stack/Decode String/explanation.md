## Problem Statement: 

Given an encoded string, return its **decoded string**.

The encoding rule is: `k[encoded_string]`, where the **encoded_string** inside the square brackets is being **repeated exactly k times**. Note that k is guaranteed to be a **positive integer**.

You may assume that the input string is **always valid**; no extra white spaces, square brackets are well-formed, etc.

Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there won't be input like `3a` or `2[4]`.

### Examples
- **Input:** s = "3[a]2[bc]"  
  **Output:** "aaabcbc"

- **Input:** s = "3[a2[c]]"  
  **Output:** "accaccacc"

- **Input:** s = "2[abc]3[cd]ef"  
  **Output:** "abcabccdcdcdef"

- **Input:** s = "abc3[cd]xyz"  
  **Output:** "abccdcdcdxyz"

### Constraints
- 1 ≤ s.length ≤ 30
- s consists of lowercase English letters, digits, and square brackets '[]'.
- s is guaranteed to be a valid input.
- All the integers in s are in the range [1, 300].

## Code Explanation

This solution uses **two stacks** (one for numbers, one for strings) and a **current string builder** to decode the string efficiently:

1. **Two stacks**:
   - `stackint` (number stack) → stores the repeat count (k) before each '['
   - `stringst` (string stack) → stores the prefix string before entering a new nested section

2. **Variables**:
   - `ans` → current string segment being built
   - `num` → current number being parsed (handles multi-digit)

3. **Processing each character**:
   - **Digit** → build the repeat number (`num = num * 10 + (c - '0')`)
   - **'['** → save current number & current string, reset for inner content
   - **']'** → pop repeat count (k) & previous string, repeat current segment k times, append to previous
   - **Normal letter** → add to current segment (`ans`)

4. **Final result** → `ans` contains the fully decoded string after all nesting is resolved

## Complexity Analysis

- **Time Complexity (TC):** `O(n + output length)`  
  - Single pass through the input string  
  - Each character is processed once, but repeated parts are copied (output size can be larger than n)

- **Space Complexity (SC):** `O(n)`  
  - Stacks store at most O(n) elements in worst case (deep nesting)  
  - Current string `ans` can be O(output length)

