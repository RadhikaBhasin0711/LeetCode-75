## Problem Statement: 

Given the `head` of a singly linked list, group all the nodes with **odd indices** together followed by the nodes with **even indices**, and return the reordered list.

- The **first node** is considered odd, and the **second node** is even.
- Group the nodes while maintaining their **relative order** within each group.
- The reordering must be done **in-place** with **O(1)** extra space.

### Examples
- **Input:** head = [1,2,3,4,5]  
  **Output:** [1,3,5,2,4]  
  Explanation:  
  - Odd indices: 1 → 3 → 5  
  - Even indices: 2 → 4  
  - Combined: 1 → 3 → 5 → 2 → 4

- **Input:** head = [2,1,3,5,6,4,7]  
  **Output:** [2,3,6,7,1,5,4]  
  Explanation:  
  - Odd: 2 → 3 → 6 → 7  
  - Even: 1 → 5 → 4  
  - Combined: 2 → 3 → 6 → 7 → 1 → 5 → 4

- **Input:** head = [1]  
  **Output:** [1]

### Constraints
- The number of nodes in the list is in the range [1, 10⁴]
- -10⁶ ≤ Node.val ≤ 10⁶

## Code Explanation

This solution uses a **two-pointer approach** to separate odd and even indexed nodes while maintaining their relative order:

1. **Edge case handling**  
   - If list is empty or has only one node → no change needed → return `head`

2. **Initialize pointers**  
   - `odd` starts at the first node (odd position)  
   - `even` starts at the second node (even position)  
   - `evenhead` saves the start of the even chain (to connect later)

3. **Separate odd and even chains**  
   - While `even` and `even->next` exist:  
     - Link `odd->next` to the next odd node (`even->next`)  
     - Move `odd` forward  
     - Link `even->next` to the next even node (`odd->next`)  
     - Move `even` forward

4. **Connect odd chain to even chain**  
   - After the loop, `odd` is at the end of the odd chain  
   - Set `odd->next = evenhead` to attach the even chain

5. Return the original `head` (now the start of the reordered list)

This approach:
- Processes the list in **one pass**
- Uses **O(1)** extra space
- Preserves relative order within odd and even groups

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single traversal through the list
- **Space Complexity (SC):** `O(1)` – only a few pointers used

