## Problem Statement: 

Two strings `word1` and `word2` are considered **close** if you can attain one from the other using the following operations **any number of times**:

1. **Swap** any two **existing** characters.
   - For example, "abcde" → "acbde"
2. **Transform** every occurrence of **one** existing character into **another** existing character, and do the same with the other character.
   - For example, all 'a' → 'e', all 'e' → 'a' (and vice versa) → "aacabb" → "bbcbaa"

Return `true` if `word1` and `word2` are **close**, and `false` otherwise.

### Examples
- **Input:** word1 = "abc", word2 = "bca"  
  **Output:** true  
  Explanation: You can attain "bca" from "abc" by swapping two characters.

- **Input:** word1 = "a", word2 = "aa"  
  **Output:** false  
  Explanation: Different lengths.

- **Input:** word1 = "cabbba", word2 = "abbccc"  
  **Output:** true  
  Explanation: You can transform 'b' ↔ 'c' and swap characters.

### Constraints
- 1 ≤ word1.length, word2.length ≤ 10⁵
- word1 and word2 consist of lowercase English letters only

## Code Explanation

The solution checks two necessary & sufficient conditions for two strings to be close:

1. **Same length**  
   - If lengths differ → impossible → return `false`

2. **Same set of characters**  
   - Both strings must have exactly the same unique characters (operations cannot introduce new characters or remove existing ones)

3. **Same frequency distribution** (multiset of frequencies must be equal)  
   - Operation 1 (swap) does not change frequencies  
   - Operation 2 (transform) **permutes** frequencies among characters  
   - So the sorted list of frequency values must be identical

**Implementation Steps:**
- Use `unordered_map` to count frequency of each character in both strings
- Use `set` to check if both strings have the exact same set of characters
- Collect frequency values into vectors `v1` and `v2`
- Sort both frequency vectors
- Compare if `v1 == v2` → if yes → strings are close

## Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - Building maps & sets: O(n) (n = length of word1 + word2)  
  - Sorting frequency vectors: O(26 log 26) ≈ O(1) since at most 26 unique characters

- **Space Complexity (SC):** `O(1)`  
  - At most 26 unique lowercase letters → constant space (maps, sets, and vectors are small)

This is a clean, efficient, and widely accepted solution for the problem.
