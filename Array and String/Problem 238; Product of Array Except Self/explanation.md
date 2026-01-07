## Problem Statement:

Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the **product of all the elements** of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

You must write an algorithm that runs in **O(n)** time and without using the division operation.

### Examples
- **Input:** nums = [1,2,3,4]  
  **Output:** [24,12,8,6]  
  Explanation:  
  - 24 = 2×3×4  
  - 12 = 1×3×4  
  - 8 = 1×2×4  
  - 6 = 1×2×3

- **Input:** nums = [-1,1,0,-3,3]  
  **Output:** [0,0,9,0,0]

### Constraints
- 2 ≤ nums.length ≤ 10⁵
- -30 ≤ nums[i] ≤ 30
- The product of any prefix or suffix is guaranteed to fit in a 32-bit integer.

## Code Explanation

The solution computes the product of all elements **except self** in **O(n)** time and **O(1)** extra space (excluding output array) using **prefix** and **suffix** products stored cleverly in the result array.

1. **Prefix Pass (Left to Right)**  
   `ans[i]` stores the product of all elements **to the left** of `i`.  
   - ans[0] = 1 (no left elements)  
   - ans[1] = nums[0]  
   - ans[2] = nums[0] × nums[1]  
   - and so on...

2. **Suffix Pass (Right to Left)**  
   We use a variable `suffix` to keep the running product from the right.  
   - Start from the second last element  
   - Multiply `suffix` with the next element (`nums[i+1]`)  
   - Multiply the current `ans[i]` (prefix) with this `suffix` → final product except self

This way, we avoid division and use constant extra space.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – two linear passes over the array.
- **Space Complexity (SC):** `O(1)` – only a few variables and the output array (required by the problem). No extra arrays used.
