## Problem Statement: 

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i-th` line are `(i, 0)` and `(i, height[i])`.

Find **two lines** that together with the x-axis form a container, such that the container contains the most water.

Return the **maximum amount of water** a container can store.

### Examples
- **Input:** height = [1,8,6,2,5,4,8,3,7]  
  **Output:** 49  
  Explanation: The vertical lines at index 1 (height 8) and index 8 (height 7) form a container with width 7 and height 7 → area = 49

- **Input:** height = [1,1]  
  **Output:** 1  
  Explanation: Only possible container has area 1

- **Input:** height = [4,3,2,1,4]  
  **Output:** 16

### Constraints
- 2 ≤ height.length ≤ 10⁵
- 0 ≤ height[i] ≤ 10⁴

## Code Explanation

This solution uses the **two-pointer technique** to find the maximum area in O(n) time:

1. Initialize two pointers:
   - `l` = 0 (leftmost line)
   - `r` = n-1 (rightmost line)
2. While `l < r`:
   - Calculate height of container = `min(height[l], height[r])` (limited by shorter line)
   - Calculate width = `r - l`
   - Calculate area = `height × width`
   - Update maximum area (`maxi`)
   - Move the pointer pointing to the **shorter** line inward (because moving the taller one cannot increase area)
     - If `height[l] > height[r]` → move right pointer left (`r--`)
     - Else → move left pointer right (`l++`)
3. Return the maximum area found.

This greedy approach works because:
- Starting with maximum width gives the best chance for large area
- Moving the shorter pointer has potential to increase height (and thus area)
- We never miss the optimal pair because we explore all possible width reductions

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass with two pointers (each pointer moves at most n times)
- **Space Complexity (SC):** `O(1)` – only a few integer variables used

This is the optimal solution for the problem — efficient, clean, and widely accepted.
