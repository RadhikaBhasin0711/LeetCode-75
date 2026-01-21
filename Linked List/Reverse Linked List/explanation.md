## Problem Statement: 

Given the `head` of a singly linked list, **reverse** the list, and return the **reversed list**.

### Examples
- **Input:** head = [1,2,3,4,5]  
  **Output:** [5,4,3,2,1]

- **Input:** head = [1,2]  
  **Output:** [2,1]

- **Input:** head = []  
  **Output:** []

### Constraints
- The number of nodes in the list is the range [0, 5000].
- -5000 ≤ Node.val ≤ 5000

## Code Explanation

This solution uses the **iterative three-pointer technique** to reverse the linked list in-place:

1. **Edge case handling**  
   - If list is empty (`head == nullptr`) or has only one node (`head->next == nullptr`) → no reversal needed → return `head`

2. **Initialize pointers**  
   - `prev = nullptr` (previous node, starts as null)  
   - `curr = head` (current node we are processing)

3. **Reverse loop**  
   - While `curr` exists:  
     - Save the next node (`forw = curr->next`)  
     - Reverse the link: `curr->next = prev`  
     - Move `prev` to current node (`prev = curr`)  
     - Move `curr` to next node (`curr = forw`)

4. **Return the new head**  
   - After loop, `prev` points to the last node (which is the new head)

This approach:
- Reverses the list **in-place** (no extra space for new nodes)
- Uses **O(1)** extra space (only three pointers)
- Processes each node exactly once

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass through the list
- **Space Complexity (SC):** `O(1)` – only a few pointers used

