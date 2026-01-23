## Problem Statement:

Given a **binary array** `nums`, you are allowed to delete **at most one element** (i.e., flip at most one `0` to `1` or remove one element).

Return the **length** of the **longest subarray** containing only `1`'s after performing the deletion (or 0 if impossible).

### Examples
- **Input:** nums = [1,1,0,1]  
  **Output:** 3  
  Explanation: Delete the 0 → [1,1,1] → longest subarray of 1's = 3

- **Input:** nums = [0,1,1,1,0,1,1,0,1]  
  **Output:** 5  
  Explanation: Delete one 0 → e.g., [1,1,1,0,1,1,0,1] → longest = 5 (positions 1–5 or 5–9 after deletion)

- **Input:** nums = [1,1,1]  
  **Output:** 2  
  Explanation: Delete any one 1 → longest remaining = 2

- **Input:** nums = [0,0,0]  
  **Output:** 0  
  Explanation: Cannot form any subarray of 1's

### Constraints
- 1 ≤ nums.length ≤ 10⁵
- nums[i] is 0 or 1

## Code Explanation

This solution uses the **sliding window** technique to find the longest subarray with **at most 1 zero** (since we can delete/flip at most one 0):

1. Maintain a window `[l, r]` that contains **at most 1 zero**.
2. Expand the right pointer (`r`) and count zeros in the window (`zer`).
3. If zeros exceed 1 (`zer > 1`):
   - Shrink the window from the left (`l++`) until `zer <= 1`
   - Decrease `zer` only if the removed element was 0
4. At every valid window (`zer <= 1`), calculate length = `r - l` (note: length excludes one 0 we can delete)
5. Track the maximum length seen (`mx`)

**Key insight**:  
The window contains at most **one 0** → we can "delete" that 0 to make the whole window all 1's → length = `r - l`

## Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - Both pointers `l` and `r` move from left to right at most once each → linear pass

- **Space Complexity (SC):** `O(1)`  
  - Only a few integer variables used (no extra arrays)

