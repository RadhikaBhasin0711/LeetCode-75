## Problem Statement: 

Given an integer array `nums` and an integer `k`, return the **maximum number of operations** you can perform on the array.

In one operation, you pick two different indices `i` and `j` such that `nums[i] + nums[j] == k`, then remove them from the array.

Return the maximum number of such operations you can perform.

### Examples
- **Input:** nums = [1,2,3,4], k = 5  
  **Output:** 2  
  Explanation:  
  - Remove 1 and 4 → nums = [2,3]  
  - Remove 2 and 3 → nums = []  
  Total operations: 2

- **Input:** nums = [3,1,3,4,3], k = 6  
  **Output:** 2  
  Explanation: Possible pairs: (3,3) and (3,3)

- **Input:** nums = [2,5,4,3,1], k = 7  
  **Output:** 2  
  Explanation: Pairs (2,5) and (4,3)

### Constraints
- 1 ≤ nums.length ≤ 10⁵
- 1 ≤ nums[i] ≤ 10⁹
- 1 ≤ k ≤ 10⁹

## Code Explanation

This solution uses the **sorting + two-pointer technique** to find the maximum number of pairs that sum to `k`:

1. **Sort** the array in non-decreasing order.
2. Use two pointers:
   - `left` starts from the beginning (smallest numbers)
   - `right` starts from the end (largest numbers)
3. While `left < right`:
   - Calculate sum = `nums[left] + nums[right]`
   - If sum == k → found a valid pair → increment count, move both pointers inward
   - If sum < k → need larger sum → move left pointer right (increase sum)
   - If sum > k → sum too big → move right pointer left (decrease sum)
4. Return the total count of valid pairs found.

This approach:
- Guarantees maximum pairs because it always tries to pair smallest with largest possible
- Handles duplicates naturally (each element used exactly once)
- Works in-place after sorting

## Complexity Analysis

- **Time Complexity (TC):** `O(n log n)` – dominated by sorting  
- **Space Complexity (SC):** `O(1)` – only a few integer variables (sorting is in-place)

This is one of the most efficient and clean solutions for the problem.
