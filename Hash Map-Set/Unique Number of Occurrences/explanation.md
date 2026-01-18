## Problem Statement:

Given an array of integers `arr`, return `true` if the **number of occurrences** of each value in the array is **unique**, or `false` otherwise.

In other words, check if **all frequencies** (how many times each number appears) are distinct from each other.

### Examples
- **Input:** arr = [1,2,2,1,1,3]  
  **Output:** true  
  Explanation:  
  - 1 appears 3 times  
  - 2 appears 2 times  
  - 3 appears 1 time  
  All frequencies (1,2,3) are unique → true

- **Input:** arr = [1,2]  
  **Output:** false  
  Explanation: Both 1 and 2 appear once → frequencies are not unique

- **Input:** arr = [-3,0,1,-3,1,1,1,-3,10,0]  
  **Output:** true  
  Explanation: Frequencies: -3:3, 0:2, 1:4, 10:1 → all unique

### Constraints
- 1 ≤ arr.length ≤ 1000
- -1000 ≤ arr[i] ≤ 1000

## Code Explanation

The solution efficiently checks if all frequencies are unique using a frequency map and sorting:

1. Use an `unordered_map<int, int>` to count the frequency of each number in `arr`.
2. Collect all frequency values into a vector `freq`.
3. Sort the `freq` vector.
4. Check for consecutive duplicates in the sorted frequencies:
   - If any two adjacent frequencies are equal → return `false`
   - Otherwise → all frequencies are unique → return `true`

This works because:
- Sorting brings identical frequencies next to each other
- A simple linear scan detects any duplicates

## Complexity Analysis

- **Time Complexity (TC):** `O(n + k log k)`  
  - Building frequency map: O(n)  
  - Collecting & sorting frequencies: O(k log k) where k ≤ n (but k ≤ 1000 → effectively O(n))  
  - Overall: **O(n)** in practice

- **Space Complexity (SC):** `O(n)`  
  - Map stores up to n unique keys  
  - Vector stores up to n frequencies

