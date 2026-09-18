# Reverse a Linked List

## Problem

Given the head of a singly linked list, reverse the linked list and return the reversed list.

## Example

Input:
1 -> 2 -> 3 -> NULL

Output:
3 -> 2 -> 1 -> NULL

## Explanation

The links between the nodes are reversed one by one.

Three pointers are used:

* `prev` stores the previous node.
* `current` stores the current node.
* `next` stores the next node temporarily.

## Approach

1. Set `prev` to NULL.
2. Set `current` to the head.
3. Store the next node.
4. Reverse the current node's link.
5. Move `prev` and `current` forward.
6. Continue until the end of the list.
7. Return `prev` as the new head.

## LeetCode

Problem: 206 - Reverse Linked List

## Time Complexity

O(n)

## Space Complexity

O(1)
