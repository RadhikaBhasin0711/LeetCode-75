## Problem Statement: 

Given a **0-indexed** `n × n` integer matrix `grid`, return the **number of pairs** `(ri, cj)` such that **row ri** and **column cj** are equal.

A row and column pair is considered equal if they contain the **same elements in the same order** (i.e., the arrays are identical).

### Examples
- **Input:** grid = [[3,2,1],[1,7,6],[2,7,7]]  
  **Output:** 1  
  Explanation:  
  - Row 2: [2,7,7] matches Column 1 → pair (2,1) → answer = 1

- **Input:** grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,5,2,2]]  
  **Output:** 3  
  Explanation: Pairs (0,0), (2,2), (3,2) are equal.

### Constraints
- n == grid.length == grid[i].length
- 1 ≤ n ≤ 200
- 0 ≤ grid[i][j] ≤ 10⁹

## Code Explanation

The solution efficiently counts how many rows are identical to each column using a **frequency map**:

1. Use `map<vector<int>, int>` to store the **frequency** of each row (vector as key).
2. Traverse all rows → insert each row into the map (frequency count).
3. Traverse each column:
   - Build the column as a `vector<int>` (by collecting `grid[j][col]` for all rows `j`)
   - Lookup how many rows match this exact column vector using the map
   - Add that count to the answer
4. Return the total number of matching pairs.

This approach:
- Avoids comparing every row with every column directly (which would be O(n³))
- Uses map lookup for fast matching

**Note:** `map<vector<int>, int>` works because `vector<int>` is comparable (lexicographical order).

## Complexity Analysis

- **Time Complexity (TC):** `O(n³ log n)`  
  - Building map: n rows × O(n log n) per insertion (vector comparison O(n) + tree height log n)  
  - Checking columns: n columns × O(n log n) per lookup  
  - Total: O(n³ log n) → acceptable since n ≤ 200 (~8M operations)

- **Space Complexity (SC):** `O(n²)`  
  - Map stores up to n vectors, each of size n

