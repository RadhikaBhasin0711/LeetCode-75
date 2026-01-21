## Problem Statement: 

In a linked list of length `n`, the **twin sum** of a node with index `i` is defined as the sum of the values of the `i-th` node and its **twin** node, where the twin node is the node at index `n-1-i`.

Return the **maximum twin sum** of the linked list.

### Examples
- **Input:** head = [5,4,2,1]  
  **Output:** 6  
  Explanation:  
  - Nodes (0,3): 5 + 1 = 6  
  - Nodes (1,2): 4 + 2 = 6  
  Maximum twin sum = 6

- **Input:** head = [4,2,2,3]  
  **Output:** 7  
  Explanation:  
  - Nodes (0,3): 4 + 3 = 7  
  - Nodes (1,2): 2 + 2 = 4  
  Maximum = 7

- **Input:** head = [1,100000]  
  **Output:** 100001

### Constraints
- The number of nodes in the list is in the range [2, 10⁵]
- 1 ≤ Node.val ≤ 10⁵

## Code Explanation

This solution finds the **maximum twin sum** by:

1. **Finding the middle** of the list using slow-fast pointer (`findMid`)  
   - Fast moves 2 steps, slow moves 1 step → slow reaches middle

2. **Reversing the second half** of the list (`reverse`)  
   - Reverse from middle to end → now we can traverse both halves simultaneously

3. **Computing twin sums**  
   - Traverse first half (`L1`) and reversed second half (`L2`)  
   - For each pair: `L1->val + L2->val`  
   - Keep track of maximum sum

4. Return the maximum twin sum found

This approach:
- Reverses only the second half in-place
- Uses O(1) extra space
- Runs in O(n) time
- Correctly handles both odd and even length lists

## Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - Finding middle: O(n/2)  
  - Reversing second half: O(n/2)  
  - Calculating twin sums: O(n/2)  
  → Total: O(n)

- **Space Complexity (SC):** `O(1)`  
  - Only a constant number of pointers used

