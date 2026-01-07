## Problem Statement: 

There are `n` kids with candies. You are given an integer array `candies`, where each `candies[i]` represents the number of candies the `i-th` kid has, and an integer `extraCandies`, representing the number of extra candies that you have.

Return a boolean array `result` of length `n`, where `result[i]` is `true` if, after giving the `i-th` kid all the `extraCandies`, they will have the **greatest** number of candies among all the kids, or `false` otherwise.

Note that multiple kids can have the greatest number of candies.

### Examples
- **Input:** candies = [2,3,5,1,3], extraCandies = 3  
  **Output:** [true,true,true,false,true]  
  Explanation:  
  Kid 1: 2+3=5 → tied for max → true  
  Kid 2: 3+3=6 → max → true  
  Kid 3: 5+3=8 → max → true  
  Kid 4: 1+3=4 → not max → false  
  Kid 5: 3+3=6 → max → true

- **Input:** candies = [4,2,1,1,2], extraCandies = 1  
  **Output:** [true,false,false,false,false]

- **Input:** candies = [12,1,12], extraCandies = 10  
  **Output:** [true,false,true]

### Constraints
- 2 ≤ candies.length ≤ 100
- 1 ≤ candies[i] ≤ 100
- 1 ≤ extraCandies ≤ 50

## Code Explanation

The solution works in two passes:

1. **Find the maximum** number of candies any kid currently has (`maxi`).
2. **For each kid**, check if adding `extraCandies` makes their total ≥ `maxi`.  
   If yes → `true` (they will have the greatest or tied for greatest).  
   If no → `false`.

We use `INT_MIN` to initialize `maxi` and update it using a simple loop.  
Then we iterate again to build the result vector using the condition `candies[i] + extraCandies >= maxi`.

This correctly handles cases where multiple kids can tie for the maximum.

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – two linear passes over the array.
- **Space Complexity (SC):** `O(n)` – for the output boolean vector (required by the problem). Extra space is `O(1)` besides the output.
