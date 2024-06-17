### Problem 2: Medium (Hashing)

**Problem Statement:**
On her quest, Emma also uncovered an ancient script that contains two magical phrases. Legend has it that if the phrases are anagrams of each other, they unlock a hidden chamber with untold treasures. Help Emma determine if the two phrases are anagrams using her newfound knowledge of ancient scripts.

**Input Format:**
- The input consists of two lines, each containing a single string representing a phrase.

**Output Format:**
- Output `True` if the two phrases are anagrams of each other, otherwise `False`.

**Example:**
```
Input:
listen
silent

Output:
True

Explanation:
The phrases "listen" and "silent" use the exact same letters with the same frequencies, making them anagrams.
```

**Example:**
```
Input:
emma
maman

Output:
false

Explanation:
The phrases "emma" and "maman" do not use the exact same letters with the same frequencies. Despite containing the same letters, "emma" has two 'm's and one 'a', whereas "maman" has two 'a's and one 'm'. Therefore, they are not anagrams.
```