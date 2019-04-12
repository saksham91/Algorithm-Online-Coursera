## Maximum Values of the Loot

### Problem Introduction
A thief finds much more loot than his bag can fit. Help him to find the most valuable combination of items assuming that any fraction of a loot item can be put into his bag.

### Problem Description
**Task:** The goal of this code problem is to implement an algorithm for the fractional knapsack problem.

**Input Format:** The first line of the input contains the number 𝑛 of items and the capacity 𝑊 of a knapsack. The next 𝑛 lines define the values and weights of the items. The 𝑖-th line contains integers 𝑣<sub>i</sub> and 𝑤<sub>i</sub>—the value and the weight of 𝑖-th item, respectively

**Constraints:** 1 ≤ 𝑛 ≤ 10<sup>3</sup>, 0 ≤ 𝑊 ≤ 2 · 10<sup>6</sup>; 0 ≤ 𝑣<sub>𝑖</sub> ≤ 2 · 10<sup>6</sup>, 0 < 𝑤<sub>𝑖</sub> ≤ 2 · 10<sub>6</sub> for all 1 ≤ 𝑖 ≤ 𝑛. All the numbers are integers.

**Sample 1:**
Input:
```
3 50
60 20
100 50
120 30
```
Output:
```
180.000
To achieve the value 180, we take the first item and the third item into the bag.
```
**Sample 2:**
Input
```
1 10
500 30
```
Output:
```
166.666
Here, we just take one third of the only available item.
```
