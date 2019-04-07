## Fibonacci Number Again (Fib mod m)

### Problem Introduction
In this problem, your goal is to compute 𝐹<sub>𝑛</sub> modulo 𝑚, where 𝑛 may be really huge: up to 10<sup>18</sup>. For such
values of 𝑛, an algorithm looping for 𝑛 iterations will not fit into one second for sure. Therefore we need to
avoid such a loop.
To get an idea how to solve this problem without going through all 𝐹<sub>𝑖</sub> for 𝑖 from 0 to 𝑛, let’s see what
happens when 𝑚 is small — say, 𝑚 = 2 or 𝑚 = 3..

![alt](https://github.com/saksham91/Algorithm-Online-Coursera/blob/master/Course_1_Algorithmic_Toolbox/Week%202/Fib_mod_m/Capture.PNG)

### Problem Description

**Task:** Given two integers 𝑛 and 𝑚, output 𝐹<sub>𝑛</sub> mod 𝑚 (that is, the remainder of 𝐹<sub>𝑛</sub> when divided by 𝑚).
**Input Format:** The input consists of two integers 𝑛 and 𝑚 given on the same line (separated by a space).
**Constraints:** 1 ≤ 𝑛 ≤ 10^18, 2 ≤ 𝑚 ≤ 10^3.
**Output Format:** Output 𝐹<sub>𝑛</sub> mod 𝑚.

Input:
```239 1000```
Output:
```161```
𝐹<sub>239</sub> mod 1 000 = 39 679 027 332 006 820 581 608 740 953 902 289 877 834 488 152 161 (mod 1 000) = 161.


