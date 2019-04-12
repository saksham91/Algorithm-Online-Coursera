## Maximum Advertisement Revenue

### Problem Introduction
You have 𝑛 ads to place on a popular Internet page. For each ad, you know how much is the advertiser willing to pay for one click on this ad. You have set up 𝑛 slots on your page and estimated the expected number of clicks per day for each slot. Now, your goal is to distribute the ads among the slots to maximize the total revenue.

### Problem Description
**Task:** Given two sequences 𝑎<sub>*1*</sub>, 𝑎<sub>*2*</sub>, . . . , 𝑎<sub>*n*</sub> (𝑎<sub>*i*</sub> is the profit per click of the 𝑖-th ad) and 𝑏<sub>*1*</sub>, 𝑏<sub>*2*</sub>, . . . , 𝑏<sub>*n*</sub> (𝑏𝑖 is the average number of clicks per day of the 𝑖-th slot), we need to partition them into 𝑛 pairs (𝑎<sub>*i*</sub>, 𝑏<sub>*j*</sub>) such that the sum of their products is maximized

**Input Format:** The first line contains an integer 𝑛, the second one contains a sequence of integers
𝑎<sub>*1*</sub>, 𝑎<sub>*2*</sub>, . . . , 𝑎<sub>*n*</sub>, the third one contains a sequence of integers 𝑏<sub>*1*</sub>, 𝑏<sub>*2*</sub>, . . . , 𝑏<sub>*n*</sub>

**Constraints:** 1 ≤ 𝑛 ≤ 10<sup>3</sup>; −10<sup>5</sup> ≤ 𝑎<sub>𝑖</sub>, 𝑏<sub>𝑖</sub> ≤ 10<sup>5</sup> for all 1 ≤ 𝑖 ≤ 𝑛.

**Output:** Output the maximum value of permutation of two array of integers

**Sample 1:**
Input:
```
1
23
39
```
Output:
```
897
897 = 23.39
```
**Sample 2:**
Input
```
3
1 3 -5
-2 4 1
```
Output:
```
23
23 = 3.4 + 1.1 + (-5).(-2)
```

## Algorithm
As we need the maximum sum from the product of integers of two arrays, we simply sort both the arrays in descending order and multiply each element and find the sum. [A simple dot product of two arrays]