## Problem Statement: 

Given two **0-indexed** integer arrays `nums1` and `nums2`, return a list `answer` of size 2 where:

- `answer[0]` is a list of all **distinct** integers in `nums1` which are **not** present in `nums2`.
- `answer[1]` is a list of all **distinct** integers in `nums2` which are **not** present in `nums1`.

The integers in the lists may be returned in **any order**.

### Examples
- **Input:** nums1 = [1,2,3], nums2 = [2,4,6]  
  **Output:** [[1,3],[4,6]]  
  Explanation:  
  - 1 and 3 are in nums1 but not in nums2  
  - 4 and 6 are in nums2 but not in nums1

- **Input:** nums1 = [1,2,3,3], nums2 = [1,1,2,2]  
  **Output:** [[3],[]]  
  Explanation:  
  - 3 is in nums1 but not in nums2  
  - Nothing is in nums2 but not in nums1

### Constraints
- 1 ≤ nums1.length, nums2.length ≤ 1000
- -1000 ≤ nums1[i], nums2[i] ≤ 1000

## Code Explanation

This solution efficiently finds the distinct elements present in one array but not the other using **hash sets**:

1. Convert both arrays into `unordered_set` to store **unique** elements (removes duplicates automatically).
2. Iterate through `set1` (unique elements of nums1):
   - If an element is **not** present in `set2` → add it to `distinct_nums1`
3. Iterate through `set2` (unique elements of nums2):
   - If an element is **not** present in `set1` → add it to `distinct_nums2`
4. Return a vector containing both result lists: `{distinct_nums1, distinct_nums2}`

This approach:
- Eliminates duplicates automatically
- Provides O(1) average-time lookups
- Preserves the requirement for distinct elements

## Complexity Analysis

- **Time Complexity (TC):** `O(n + m)` – where n = nums1.size(), m = nums2.size()  
  (Construction of sets + two linear traversals over unique elements)
- **Space Complexity (SC):** `O(n + m)` – for the two hash sets and output vectors

This is one of the most efficient and clean solutions for the problem.
