## Problem Statement: 

Given an array of integers `nums`, calculate the **pivot index** of this array.

The **pivot index** is the index where the sum of all the numbers **strictly to the left** of the index is equal to the sum of all the numbers **strictly to the right** of the index.

If the pivot index exists, return its index. Otherwise, return `-1`. If there are more than one pivot indices, you can return **any** of them.

### Examples
- **Input:** nums = [1,7,3,6,5,6]  
  **Output:** 3  
  Explanation:  
  - Left sum = 1 + 7 + 3 = 11  
  - Right sum = 5 + 6 = 11  
  → Pivot at index 3

- **Input:** nums = [1,2,3]  
  **Output:** -1  
  Explanation: No index satisfies the condition

- **Input:** nums = [2,1,-1]  
  **Output:** 0  
  Explanation: Left sum = 0, Right sum = 1 + (-1) = 0

### Constraints
- 1 ≤ nums.length ≤ 10⁴
- -1000 ≤ nums[i] ≤ 1000

## Code Explanation

This solution uses the **prefix sum technique** with a single pass for optimal efficiency:

1. Calculate the **total sum** of the entire array once.
2. Maintain a running **left sum** (sum of elements to the left of current index).
3. For each index `i`:
   - Compute **right sum** = `totalSum - leftSum - nums[i]` (exclude current element)
   - If `leftSum == rightSum` → current index is pivot → return `i`
   - Add `nums[i]` to `leftSum` for the next iteration
4. If no pivot found after full traversal → return `-1`

This approach:
- Avoids calculating left/right sums repeatedly
- Uses O(1) extra space
- Handles edge cases (single element, no pivot, pivot at 0 or end)

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – two linear passes (one for total sum, one for checking)
- **Space Complexity (SC):** `O(1)` – only a few integer variables used

