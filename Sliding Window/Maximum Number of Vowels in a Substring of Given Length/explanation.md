## Problem Statement: 

Given a string `s` and an integer `k`, return the **maximum number of vowel letters** in any substring of `s` with length `k`.

**Vowel letters** in English are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'` (both lowercase and uppercase).

### Examples
- **Input:** s = "abciiidef", k = 3  
  **Output:** 3  
  Explanation: Substring "iii" contains 3 vowels.

- **Input:** s = "aeiou", k = 2  
  **Output:** 2  
  Explanation: Any substring of length 2 contains 2 vowels.

- **Input:** s = "tryhard", k = 4  
  **Output:** 1

### Constraints
- 1 ≤ s.length ≤ 10⁵
- s consists of lowercase English letters
- 1 ≤ k ≤ s.length

## Code Explanation

This solution uses the **sliding window technique** to efficiently find the maximum number of vowels in any substring of length `k`:

1. Define a helper function `isvow(char ch)` to check if a character is a vowel (lowercase only in this problem).
2. Compute the number of vowels in the **first window** of size `k` and initialize `mxi` (maximum) with this count.
3. Slide the window from index `k` to `s.length()-1`:
   - Remove the vowel count of the element leaving the window (`s[i-k]`)
   - Add the vowel count of the new element entering the window (`s[i]`)
   - Update `mxi` if the current window has more vowels
4. Return the maximum count found.

This approach avoids recalculating the vowel count for each window from scratch, making it highly efficient.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass through the string (first window + sliding)
- **Space Complexity (SC):** `O(1)` – only a few integer variables and a constant helper function

This is the optimal solution for the problem — clean, efficient, and widely accepted.
