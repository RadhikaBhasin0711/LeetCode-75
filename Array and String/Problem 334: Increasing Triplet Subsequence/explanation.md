## Problem Statement: 

Given an integer array `nums`, return `true` if there exists a **triple of indices** `(i, j, k)` such that `i < j < k` and `nums[i] < nums[j] < nums[k]`. If no such indices exist, return `false`.

### Examples
- **Input:** nums = [1,2,3,4,5]  
  **Output:** true  
  Explanation: Any triplet (e.g., 1 < 2 < 3) works.
- **Input:** nums = [5,4,3,2,1]  
  **Output:** false  
  Explanation: No increasing triplet exists.
- **Input:** nums = [2,1,5,0,4,6]  
  **Output:** true  
  Explanation: Triplet (2,1,5) → 1 < 5 < 6 (indices 1 < 2 < 5).

### Constraints
- 1 ≤ nums.length ≤ 5 × 10⁵
- -2³¹ ≤ nums[i] ≤ 2³¹ - 1

## Code Explanation

The solution uses a **greedy approach** with two variables:
- `min1`: tracks the smallest number seen so far (potential first element of triplet).
- `min2`: tracks the smallest number seen **after** `min1` that is strictly greater than `min1` (potential second element).

For each number `n` in the array:
- If `n ≤ min1` → update `min1` (better candidate for first position).
- Else if `n ≤ min2` → update `min2` (better candidate for second position).
- Else → `n > min2` (and `min2 > min1`) → we found a valid increasing triplet → return `true`.

If loop completes without finding such `n`, return `false`.

This ensures we detect an increasing triplet in a single pass.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass through the array.
- **Space Complexity (SC):** `O(1)` – only two integer variables used.
