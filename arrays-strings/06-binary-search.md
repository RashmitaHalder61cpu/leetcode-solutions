# Binary Search

## Problem
Given a sorted array and a target value, find the index of the target using binary search.

## Example
Input:
[1, 3, 5, 7, 9, 11]

Target:
7

Output:
3

## Explanation
The target value 7 is present at index 3.

Binary search repeatedly checks the middle element and eliminates half of the remaining search space.

## Approach
1. Set the left and right boundaries.
2. Find the middle element.
3. If the middle element is the target, return its index.
4. If the target is greater, search the right half.
5. If the target is smaller, search the left half.
6. Return -1 if the target is not found.

## Time Complexity
O(log n)

## Space Complexity
O(1)