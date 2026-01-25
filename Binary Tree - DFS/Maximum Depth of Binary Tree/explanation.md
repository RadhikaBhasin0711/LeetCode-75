## Problem Statement: 

Given the `root` of a binary tree, return its **maximum depth**.

The **maximum depth** of a binary tree is the number of nodes along the longest path from the root node down to the farthest leaf node.

**Note:** A leaf is a node with no children.

### Examples
- **Input:** root = [3,9,20,null,null,15,7]  
  **Output:** 3  
  Explanation:  
  The longest path is 3 → 20 → 7 (or 3 → 20 → 15) → depth = 3

- **Input:** root = [1,null,2]  
  **Output:** 2

- **Input:** root = []  
  **Output:** 0

- **Input:** root = [1]  
  **Output:** 1

### Constraints
- The number of nodes in the tree is in the range [0, 10⁴].
- -100 ≤ Node.val ≤ 100

## Code Explanation

This solution uses a **simple recursive DFS** (Depth-First Search) approach to calculate the maximum depth:

1. **Base case**  
   - If the current node is `nullptr` (null/empty tree) → depth = **0**  
   → This handles empty trees and leaf nodes (when we reach beyond a leaf)

2. **Recursive calls**  
   - Compute the maximum depth of the **left subtree** → `left = maxDepth(root->left)`
   - Compute the maximum depth of the **right subtree** → `right = maxDepth(root->right)`

3. **Current depth**  
   - The depth at the current node = **1** (current node) + **maximum** of left and right subtree depths  
   → `return max(left, right) + 1`

This recursive formula naturally computes the longest path from root to leaf.

### Why This is Correct

- At each node, we take the **longer path** from its subtrees and add 1 for the current level
- When we reach a leaf → left and right are both 0 → return 1 (correct for leaf)
- Empty tree → return 0

### Complexity Analysis

- **Time Complexity (TC):** `O(n)`  
  - We visit **every node exactly once** (n = number of nodes)

- **Space Complexity (SC):** `O(h)`  
  - Where h = height of the tree (recursion stack depth)  
  - Worst case: O(n) (skewed tree)  
  - Best case: O(log n) (balanced tree)

