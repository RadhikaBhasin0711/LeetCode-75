## Problem Statement: 

Given an integer array `nums`, move all **0's** to the end of it while maintaining the **relative order** of the non-zero elements.

**Note** that you must do this **in-place** without making a copy of the array.

### Examples
- **Input:** nums = [0,1,0,3,12]  
  **Output:** [1,3,12,0,0]  
  Explanation: All non-zero elements maintain their order, zeros are moved to the end.

- **Input:** nums = [0]  
  **Output:** [0]

- **Input:** nums = [1,0,0,2,0,5]  
  **Output:** [1,2,5,0,0,0]

### Constraints
- 1 ≤ nums.length ≤ 10⁴
- -2³¹ ≤ nums[i] ≤ 2³¹ - 1

## Code Explanation

The solution uses the **two-pointer technique** (also called the "Dutch National Flag" style for moving zeros):

1. Maintain a pointer `nonZero` that tracks the position where the **next non-zero element** should be placed.
2. Iterate through the array with index `i`.
3. Whenever a **non-zero** element is found (`nums[i] != 0`):
   - Swap it with the element at `nonZero` position.
   - Increment `nonZero` to prepare for the next non-zero element.
4. All zeros naturally get pushed to the end as non-zero elements are shifted left.

This ensures:
- Relative order of non-zero elements is preserved.
- All zeros are moved to the end.
- Done **in-place** with **O(1)** extra space.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass through the array.
- **Space Complexity (SC):** `O(1)` – only a single integer variable (`nonZero`) is used.
