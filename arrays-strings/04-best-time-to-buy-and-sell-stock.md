# Best Time to Buy and Sell Stock

## Problem
Given an array of stock prices, find the maximum profit that can be achieved by buying on one day and selling on a later day.

## Example
Input:
[7, 1, 5, 3, 6, 4]

Output:
5

## Explanation
Buy the stock at price 1 and sell it at price 6.

Maximum Profit = 6 - 1 = 5

## Approach
1. Keep track of the minimum price seen so far.
2. Calculate the profit for each price.
3. Keep track of the maximum profit.
4. Return the maximum profit.

## Time Complexity
O(n)

## Space Complexity
O(1)