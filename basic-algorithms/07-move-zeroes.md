# Move Zeroes

## Problem

Given an integer array, move all zeroes to the end while maintaining the relative order of the non-zero elements.

## Example

Input:
[0, 1, 0, 3, 12]

Output:
[1, 3, 12, 0, 0]

## Explanation

The non-zero elements are moved to the beginning of the array, while all zeroes are placed at the end.

The relative order of the non-zero elements remains unchanged.

## Approach

1. Keep a position variable to track where the next non-zero element should go.
2. Traverse the array.
3. If an element is non-zero, place it at the current position.
4. After all non-zero elements are placed, fill the remaining positions with zeroes.

## LeetCode

Problem: 283 - Move Zeroes

## Time Complexity

O(n)

## Space Complexity

O(1)

