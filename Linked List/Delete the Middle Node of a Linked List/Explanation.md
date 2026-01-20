## Problem Statement: 

Given the **head** of a singly linked list, delete the **middle node** of the list and return the **head** of the modified list.

The **middle node** of a linked list of size `n` is the **⌊n / 2⌋-th node** from the start using **0-based indexing**, where ⌊x⌋ denotes the largest integer less than or equal to x.

- For n = 1, 2, 3, 4, and 5, the middle nodes are indices 0, 1, 1, 2, and 2 respectively.

### Examples
- **Input:** head = [1,3,4,7,1,2,6]  
  **Output:** [1,3,4,1,2,6]  
  Explanation: n = 7, middle index = ⌊7/2⌋ = 3 → delete node with value 7

- **Input:** head = [1]  
  **Output:** []  
  Explanation: n = 1, middle index = 0 → delete the only node

- **Input:** head = [2,1]  
  **Output:** [2]  
  Explanation: n = 2, middle index = 1 → delete node with value 1

### Constraints
- The number of nodes in the list is in the range [1, 10⁵].
- 1 ≤ Node.val ≤ 10⁵

## Code Explanation

This solution uses the **slow and fast pointer technique** (tortoise and hare) to find and delete the middle node in a single pass:

1. **Edge case handling**  
   - If the list is empty (`head == nullptr`) or has only one node (`head->next == nullptr`) → deleting the middle returns `nullptr`.

2. **Slow and fast pointers**  
   - `slow` moves one step at a time  
   - `fast` moves two steps at a time  
   - When `fast` reaches the end, `slow` will be at the middle node

3. **Track previous node**  
   - `prev` keeps the node just before `slow`  
   - To delete `slow`, we set `prev->next = slow->next`

4. **Delete the middle node**  
   - If `prev` exists → link `prev` to the node after `slow`  
   - Free the memory of `slow` (optional in LeetCode but good practice)

5. Return the original head (modified list)

This approach:
- Finds the middle node correctly for both odd and even lengths
- Deletes it in-place
- Handles all edge cases safely

## Complexity Analysis

- **Time Complexity (TC):** `O(n)` – single pass through the list with fast pointer
- **Space Complexity (SC):** `O(1)` – only a few pointers used

