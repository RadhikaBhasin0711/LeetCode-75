## Problem Statement: 

We are given an array of integers `asteroids` representing asteroids in a row.

- Positive value → asteroid moving to the **right**
- Negative value → asteroid moving to the **left**
- Absolute value → size/mass of the asteroid

Asteroids moving in the **same direction** never collide.  
Asteroids moving in **opposite directions** will collide and destroy each other according to these rules:

- If two asteroids of **equal size** collide → both are destroyed
- If one is **larger**, the smaller one is destroyed and the larger one continues moving
- If they are moving in the **same direction** → no collision

Return an array representing the **final state** of the asteroids after all collisions.

### Examples
- **Input:** asteroids = [5,10,-5]  
  **Output:** [5,10]  
  Explanation: 10 and -5 collide → 10 survives (larger), 5 continues → [5,10]

- **Input:** asteroids = [10,2,-5]  
  **Output:** [10]  
  Explanation: 2 and -5 collide → -5 survives → collides with 10 → 10 survives

- **Input:** asteroids = [8,-8]  
  **Output:** []  
  Explanation: Equal size → both destroyed

- **Input:** asteroids = [10,2,-5,-5]  
  **Output:** [10]  
  Explanation: Multiple destructions → 10 survives

### Constraints
- 2 ≤ asteroids.length ≤ 10⁴
- -1000 ≤ asteroids[i] ≤ 1000
- asteroids[i] ≠ 0

## Code Explanation

This solution uses a **stack** to simulate the collisions efficiently:

1. **Initialize** an empty stack `st` to store surviving asteroids.
2. Iterate through each asteroid in `asteroids`:
   - If asteroid is **positive** (moving right) → push directly (no collision with previous right-moving)
   - If asteroid is **negative** (moving left) → check for collision with right-moving asteroids on stack:
     - While stack top is positive (right-moving) and current negative is stronger (`abs(i) > st.top()`):
       - Pop the smaller right-moving asteroid
     - After loop: check equal magnitude
       - If equal → pop left one (right is destroyed too) → skip push
     - If no equal and stack empty or top is negative → push current negative
3. **Build result**:
   - Stack has surviving asteroids in reverse order
   - Pop into vector `ans` → reverse it → return

## Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - Each asteroid is pushed and popped at most once

- **Space Complexity (SC):** `O(n)`  
  - Stack stores up to n asteroids in worst case

