### Problem 1: Easy (Hashing)

**Problem Statement:**
<!-- Emma loves collecting rare artifacts, especially ancient coins. Recently, she stumbled upon a treasure map that led her to an old crypt filled with numbered chests. Each chest contains a unique ancient coin. However, some of the chests have duplicates! Help Emma find the first duplicate coin using her treasure map. -->

**Input Format:**
- The first line of input contains an integer `n`, denoting the number of chests.
- The next `n` lines each contain a single integer, representing the number on the coin in each chest.

**Output Format:**
- Output a single integer which is the number on the first duplicate coin found. If all coins are unique, output `-1`.

**Example:**
```
Input:
6
2
1
3
5
3
2

Output:
2

Explanation:
In this scenario, the number `2` appears twice, making it the first duplicate coin Emma encounters.
```

**Example:**
```
Input:
5
10
45
52
69
54


Output:
-1

Explanation:
In this scenario, all coins have unique numbers. There are no duplicates among the coins Emma has discovered. Therefore, the output is `-1`.
```
