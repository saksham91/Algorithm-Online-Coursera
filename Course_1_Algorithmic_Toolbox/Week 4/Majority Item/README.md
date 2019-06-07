## Majority Item

### Problem Introduction
Majority rule is a decision rule that selects the alternative which has a majority, that is, more than half the votes. Given a sequence of elements 𝑎<sub>1</sub>, 𝑎<sub>2</sub>, . . . , 𝑎<sub>𝑛</sub>, you would like to check whether it contains an element that appears more than 𝑛/2 times. A naive way to do this is the following:
```
MajorityElement(𝑎<sub>1</sub>, 𝑎<sub>2</sub>, . . . , 𝑎<sub>𝑛</sub>):
for 𝑖 from 1 to 𝑛:
    currentElement ← 𝑎<sub>𝑖</sub>
    count ← 0
    for 𝑗 from 1 to 𝑛:
        if 𝑎<sub>𝑗</sub> = currentElement:
        count ← count + 1
    if count > 𝑛/2:
    return 𝑎<sub>𝑖</sub>
return “no majority element”
```
The running time of this algorithm is quadratic. Your goal is to use the divide-and-conquer technique to design an 𝑂(𝑛 log 𝑛) algorithm.

### Problem Description
**Task:** The goal in this code problem is to check whether an input sequence contains a majority element.

**Input Format:** The first line contains an integer 𝑛, the next one contains a sequence of 𝑛 non-negative integers 𝑎<sub>0</sub>, 𝑎<sub>1</sub>, . . . , 𝑎<sub>𝑛−1</sub>.

**Constraints:** 1 ≤ 𝑛 ≤ 10<sup>5</sup>; 0 ≤ 𝑎<sub>𝑖</sub> ≤ 10<sup>9</sup> for all 0 ≤ 𝑖 < 𝑛.

**Output:** Output 1 if the sequence contains an element that appears strictly more than 𝑛/2 times, and 0 otherwise.

**Sample 1:**
Input:
```
5
2 3 9 2 2
```
Output:
```
2
```
2 is the majority element

**Sample 2:**
Input:
```
4
1 2 3 4
```
Output:
```
0
```
No majority element


