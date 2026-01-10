## Problem Statement: 

You have a flowerbed represented as an integer array `flowerbed` where:
- `flowerbed[i] == 0` means the plot is empty.
- `flowerbed[i] == 1` means the plot is already planted with a flower.

You want to plant **exactly `n`** new flowers such that **no two flowers are adjacent** (i.e., no two 1's are next to each other).

Return `true` if it is possible to plant `n` flowers without violating the no-adjacent rule, otherwise return `false`.

### Examples
- **Input:** flowerbed = [1,0,0,0,1], n = 1  
  **Output:** true  
  Explanation: Plant at index 2 → [1,0,1,0,1]

- **Input:** flowerbed = [1,0,0,0,1], n = 2  
  **Output:** false  
  Explanation: Cannot plant two flowers without adjacency.

- **Input:** flowerbed = [1,0,0,0,0,1], n = 2  
  **Output:** true  
  Explanation: Plant at index 2 and 4 → [1,0,1,0,1,1]

### Constraints
- 1 ≤ flowerbed.length ≤ 2 × 10⁴
- flowerbed[i] is 0 or 1
- There are no two adjacent flowers in flowerbed
- 0 ≤ n ≤ flowerbed.length

## Code Explanation

The solution greedily places flowers from left to right using a single pass:

1. Iterate through each plot in the flowerbed.
2. For each empty plot (`flowerbed[i] == 0`):
   - Check if the **left neighbor** is empty (or doesn't exist).
   - Check if the **right neighbor** is empty (or doesn't exist).
3. If both neighbors are empty → plant a flower (`flowerbed[i] = 1`) and increment the count.
4. Continue until we've placed enough flowers or reached the end.
5. Finally, check if the number of placed flowers ≥ `n`.

This greedy approach works because planting as early as possible (left to right) maximizes the chance of placing more flowers later.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass through the flowerbed array.
- **Space Complexity (SC):** `O(1)` – only a few integer variables used (we modify the input array in-place, but it's allowed).
