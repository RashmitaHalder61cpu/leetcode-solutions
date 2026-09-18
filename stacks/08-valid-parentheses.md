# Valid Parentheses

## Problem

Given a string containing `(`, `)`, `{`, `}`, `[` and `]`, determine if the brackets are valid.

## Example

Input:
"({[]})"

Output:
true

## Explanation

A string is valid when every opening bracket has the correct closing bracket and the brackets are closed in the correct order.

A stack is used to keep track of opening brackets.

## Approach

1. Create an empty stack.
2. Traverse the string from left to right.
3. Push every opening bracket onto the stack.
4. When a closing bracket is found, compare it with the top of the stack.
5. If they do not match, return false.
6. At the end, if the stack is empty, return true.

## LeetCode

Problem: 20 - Valid Parentheses

## Time Complexity

O(n)

## Space Complexity

O(n)
