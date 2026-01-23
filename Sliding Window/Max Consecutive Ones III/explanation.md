## Problem Statement:

Given a binary array `nums` and an integer `k`, return the **maximum number of consecutive 1's** in the array if you can flip at most `k` 0's.

In other words, find the longest subarray that contains at most `k` zeros (you can flip those zeros to ones).

### Examples
- **Input:** nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2  
  **Output:** 6  
  Explanation: Flip the two 0's at indices 3 and 4 → longest sequence of 1's = 6

- **Input:** nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3  
  **Output:** 10  
  Explanation: Flip three 0's to get 10 consecutive 1's

- **Input:** nums = [1,1,1], k = 0  
  **Output:** 3

### Constraints
- 1 ≤ nums.length ≤ 10⁵
- nums[i] is 0 or 1
- 0 ≤ k ≤ nums.length

## Code Explanation

This solution uses the **sliding window** technique to find the longest subarray with at most `k` zeros:

1. Maintain a window `[l, r]` that contains **at most k zeros**.
2. Expand the right pointer (`r`) and count zeros in the window (`zer`).
3. If the number of zeros exceeds `k` (`zer > k`):
   - Shrink the window from the left (`l++`) until `zer <= k` again
   - Subtract 1 from `zer` only if the removed element was 0
4. At every valid window (`zer <= k`), update the maximum length: `len = r - l + 1`
5. Return the maximum length found

## Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - Each element is visited at most twice (once by `r`, once by `l`) — two pointers move from left to right.

- **Space Complexity (SC):** `O(1)`  
  - Only a few integer variables used (no extra arrays)

