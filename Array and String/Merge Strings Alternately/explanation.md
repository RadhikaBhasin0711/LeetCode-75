## Problem Statement:
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.

#### Examples:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"

#### Constraints:

1 ≤ word1.length, word2.length ≤ 100

word1 and word2 consist of lowercase English letters.

## Code Explanation
The function merges two strings alternately using two pointers i and j. It first interleaves characters from both strings until one is exhausted, then appends the remaining characters from the longer string. Finally, it returns the merged result.

#### Time Complexity (TC): 
O(m + n) – where m and n are the lengths of word1 and word2 (each character is processed exactly once).
#### Space Complexity (SC): 
O(m + n) – for the output string ans (required to store the result).
