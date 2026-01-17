## Problem Statement: 

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a **contiguous subarray** whose length is equal to `k` that has the **maximum average value** and return **this value**. Any answer with a calculation error less than **10⁻⁵** will be accepted.

### Examples
- **Input:** nums = [1,12,-5,-6,50,3], k = 4  
  **Output:** 12.75000  
  Explanation: Maximum average is (12 + (-5) + (-6) + 50) / 4 = 12.75

- **Input:** nums = [5], k = 1  
  **Output:** 5.00000

### Constraints
- 1 ≤ k ≤ n ≤ 10⁵
- -10⁴ ≤ nums[i] ≤ 10⁴

## Code Explanation

This solution uses the **sliding window technique** to find the maximum average of a subarray of size `k` in a single pass:

1. Compute the sum of the **first window** (first `k` elements).
2. Calculate its average and initialize it as the current maximum (`mxi`).
3. Slide the window from index `k` to `n-1`:
   - Subtract the element that is sliding out (`nums[i-k]`)
   - Add the new element entering the window (`nums[i]`)
   - Update the maximum average if the new window's average is larger
4. Return the maximum average found.

This approach avoids recalculating the sum for each window from scratch, making it highly efficient.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass through the array (first window + sliding)
- **Space Complexity (SC):** `O(1)` – only a few variables are used (no extra arrays)

This is the optimal solution for the problem — efficient, clean, and widely accepted.
