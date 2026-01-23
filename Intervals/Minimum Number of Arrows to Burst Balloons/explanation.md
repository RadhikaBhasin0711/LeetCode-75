## Problem Statement: 

There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array `points` where `points[i] = [x_start, x_end]` denotes a balloon whose **horizontal diameter** stretches between `x_start` and `x_end`. You do **not** know the exact y-coordinates of the balloons.

You are given a **single arrow** that can be shot vertically (i.e., parallel to the y-axis). Shooting an arrow at `x` will burst all balloons whose diameter overlaps with the line `x = x` (including the boundaries).

Return the **minimum number of arrows** that must be shot to burst all balloons.

### Examples
- **Input:** points = [[10,16],[2,8],[1,6],[7,12]]  
  **Output:** 2  
  Explanation:  
  - One arrow at x = 6 bursts [2,8] and [1,6]  
  - Another arrow at x = 11 bursts [10,16] and [7,12]  
  Minimum arrows = 2

- **Input:** points = [[1,2],[3,4],[5,6],[7,8]]  
  **Output:** 4  
  Explanation: All intervals are non-overlapping → need 4 arrows

- **Input:** points = [[1,2],[2,3],[3,4],[4,5]]  
  **Output:** 2  
  Explanation: Arrow at x=2 bursts first two, arrow at x=4 bursts last two

### Constraints
- 1 ≤ points.length ≤ 10⁵
- points[i].length == 2
- -2³¹ ≤ x_start < x_end ≤ 2³¹ - 1

## Code Explanation (Your Approach)

This solution uses a **greedy algorithm** after sorting intervals by **start time**:

1. **Edge case**  
   - If no intervals → return 0

2. **Sort intervals by start time**  
   - `sort(points.begin(), points.end());` → sorts by first element (x_start)

3. **Greedy traversal**  
   - Start with first balloon → set `curr` = its end time  
   - For each subsequent balloon:  
     - If current balloon starts **before or at** `curr` → **overlap**  
       - Update `curr` to the **earlier ending** time (`min(curr, points[i][1])`)  
       - This means one arrow can burst both  
     - Else → no overlap → need a **new arrow** → increment `ans`  
       - Update `curr` to current balloon's end time

4. Return the total number of arrows needed (`ans`)

This approach is correct because:
- By always extending the arrow to cover as many overlapping balloons as possible (using the earliest end), we minimize the number of arrows.
- Sorting by start time + taking min end in overlap ensures we greedily cover maximum balloons with each arrow.

## Complexity Analysis

- **Time Complexity (TC):** `O(n log n)`  
  - Dominated by sorting  
  - Traversal is O(n)

- **Space Complexity (SC):** `O(1)` extra (ignoring sorting space)  
  - Only a few integer variables used

