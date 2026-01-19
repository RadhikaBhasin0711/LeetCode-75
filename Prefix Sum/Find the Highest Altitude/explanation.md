## Problem Statement:

You are given an integer array `gain` of length `n` where `gain[i]` is the **net gain in altitude** between points `i` and `i+1` (i.e., the change in height).

You start your bike ride at altitude **0**.

Return the **highest altitude** of a point you reach during your ride.

### Examples
- **Input:** gain = [1,-3,5,-2]  
  **Output:** 3  
  Explanation:  
  Altitudes: [0, 1, -2, 3, 1]  
  Highest = 3

- **Input:** gain = [-4,-3,-2,-1,4,3,2]  
  **Output:** 0  
  Explanation: Altitudes never go above 0

- **Input:** gain = [0]  
  **Output:** 0

### Constraints
- n == gain.length
- 1 ≤ n ≤ 100
- -100 ≤ gain[i] ≤ 100

## Code Explanation

This solution uses a **single-pass** approach to track the current and maximum altitude:

1. Initialize:
   - `curralt = 0` (starting altitude)
   - `mxalt = 0` (maximum altitude seen so far)
2. Iterate through each gain value:
   - Add the current gain to `curralt` (update altitude)
   - Update `mxalt` if current altitude is higher
3. Return the maximum altitude reached

This is the **optimal and cleanest** solution:
- No extra array needed
- Handles all cases (positive, negative, zero gains)
- Correctly tracks the peak altitude during the ride

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` — single pass through the array
- **Space Complexity (SC):** `O(1)` — only two integer variables used

