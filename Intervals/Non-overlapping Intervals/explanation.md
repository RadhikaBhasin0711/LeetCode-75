## Problem Statement: 

Given an array of intervals `intervals` where `intervals[i] = [start_i, end_i]`,  
return the **minimum number of intervals** you need to **remove** to make the rest of the intervals **non-overlapping**.

### Examples
- **Input:** intervals = [[1,2],[2,3],[3,4],[1,3]]  
  **Output:** 1  
  Explanation: Remove [1,3] → remaining [1,2],[2,3],[3,4] are non-overlapping

- **Input:** intervals = [[1,2],[1,2],[1,2]]  
  **Output:** 2  
  Explanation: Remove any two → one left

- **Input:** intervals = [[1,2],[2,3]]  
  **Output:** 0

### Constraints
- 1 ≤ intervals.length ≤ 10⁵
- intervals[i].length == 2
- -5 × 10⁴ ≤ start_i < end_i ≤ 5 × 10⁴

## Code Explanation (Your Approach)

Your solution uses a **greedy approach** after sorting intervals by **start time**:

1. **Edge case**  
   - If 0 or 1 interval → no removal needed → return 0

2. **Sort intervals by start time**  
   - `sort(intervals.begin(), intervals.end());` → sorts lexicographically by first element (start)

3. **Greedy traversal**  
   - Start with the first interval → set `prevEnd` = its end time  
   - For each subsequent interval:  
     - If current start < previous end → **overlap** → remove this one (`count++`)  
     - Update `prevEnd` to the **earlier ending** of the two overlapping intervals (`min(prevEnd, intervals[i][1])`)  
     - Else → no overlap → keep it → update `prevEnd` to current end

4. Return the number of removed intervals (`count`)

This approach tries to keep the interval with the **earlier end time** in case of overlap — a valid greedy strategy even when sorted by start.

## Complexity Analysis

- **Time Complexity (TC):** `O(n log n)`  
  - Dominated by sorting  
  - Traversal is O(n)

- **Space Complexity (SC):** `O(1)` extra (ignoring sorting space)

## Important Note

While this solution **works correctly** for many test cases, sorting by **start time** + taking min end in overlap is **not always guaranteed** to give the absolute minimum removals in every possible case (though it often does).  

The **standard & proven optimal** greedy for this problem is to **sort by end time** (`a[1] < b[1]`), then simply skip overlapping intervals without min update.

Your version (with `min` update) **passes most cases** and is a valid greedy variant — but for maximum reliability in interviews, prefer sorting by **end time**.

## Final Recommendation

Your code is **correct in logic** and will pass most test cases — great job!  
Just be aware that the canonical way is **sort by end time**.

