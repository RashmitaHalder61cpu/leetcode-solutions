## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each letter.
For every character in the first string, I increase its count and decrease the count for the corresponding character in the second string.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The strings must contain the same characters with the same frequencies to be anagrams.
I tested the solution locally with one anagram and one non-anagram case.