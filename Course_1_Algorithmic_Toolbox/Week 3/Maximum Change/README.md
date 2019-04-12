## Money Change

### Problem Introduction
In this problem, you will design and implement an elementary greedy algorithm used by cashiers all over the world millions of times per day.

### Problem Description
**Task:** The goal in this problem is to find the minimum number of of coins needed to change the input value (an integer) into coins with denomination 1, 5 and 10

**Input Format:** The input consists of a single integer m

**Constraints:** 1 ≤ 𝑚 ≤ 10<sup>3</sup>

**Sample:**
Input:
```28```
Output:
```6```

```28 = 10*2 + 5*1 + 1*3```

### Logic Used
* Divide the money value by the largest denomination of currency (10 in this case)
* Take the modulus of the money value and store the result as the new money value
* Repeat steps 1 and 2 for every remaining currency