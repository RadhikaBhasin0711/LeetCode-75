## Problem Statement: 

Given a string `s`, reverse the **order of words**.

A **word** is defined as a sequence of non-space characters.  
The words in `s` will be separated by at least one space.

Return a string of the words in **reverse order** concatenated by a single space.

**Note:**  
- `s` may contain leading or trailing spaces.
- There may be multiple spaces between two words.
- The returned string should have **only one space** between words and **no leading/trailing spaces**.

### Examples
- **Input:** s = "the sky is blue"  
  **Output:** "blue is sky the"

- **Input:** s = "  hello world  "  
  **Output:** "world hello"  
  Explanation: Removed leading/trailing spaces, only single space between words.

- **Input:** s = "a good   example"  
  **Output:** "example good a"

### Constraints
- 1 ≤ s.length ≤ 10⁴
- `s` contains English letters (upper-case and lower-case), digits, and spaces `' '`.
- There is **at least one word** in `s`.

## Code Explanation

This solution reverses the order of words in the string efficiently:

1. Use `stringstream` to **split** the input string `s` into words (automatically handles multiple spaces and ignores extra whitespace).
2. Store each word in a vector `wrds`.
3. **Reverse** the vector using two pointers (`i` and `j`) and `swap`.
4. Build the final string `res`:
   - Add each word from the reversed vector
   - Insert a single space before each word (except the first)
5. Return the resulting string.

This approach:
- Handles multiple spaces automatically
- Removes leading/trailing spaces
- Ensures exactly one space between words

## Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - Splitting string with stringstream: O(n)  
  - Reversing vector: O(n)  
  - Building result string: O(n)

- **Space Complexity (SC):** `O(n)`  
  - Vector to store words + result string (O(n) space is required)

This is a clean, efficient, and widely accepted solution for the problem.
