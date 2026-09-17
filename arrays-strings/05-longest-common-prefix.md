# Longest Common Prefix

## Problem
Given an array of strings, find the longest common prefix shared by all strings.

## Example
Input:
["flower", "flow", "flight"]

Output:
"fl"

## Explanation
The strings "flower", "flow", and "flight" all start with "fl".

Therefore, the longest common prefix is "fl".

## Approach
1. Take the first string as the initial prefix.
2. Compare it with each remaining string.
3. Keep only the characters that match.
4. Continue until all strings are checked.

## Time Complexity
O(n × m)

## Space Complexity
O(m)