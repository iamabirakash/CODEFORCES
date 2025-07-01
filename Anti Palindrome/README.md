[Anti Palindrome](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/ANTIPALINDR?tab=statement)
Definitions:

A string 
T
T is called semi-palindrome if you can rearrange the characters of 
T
T to make it into a palindrome.
For eg. if 
T
=
a
a
b
b
T=aabb, it isn't a palindrome as of now, but it can be rearranged to form 
a
b
b
a
abba, which is a palindrome. Thus, 
T
=
a
a
b
b
T=aabb is a semi-palindrome.

An anti-palindrome is the opposite of a semi-palindrome. In particular, a string 
T
T is called an anti-palindrome if it is not possible to rearrange the characters of 
T
T to make it into a palindrome.
For eg. if 
T
=
a
b
c
T=abc, there is no rearrangement of this string which makes it into a palindrome. Hence, 
T
=
a
b
c
T=abc is an anti-palindrome.

Now on to the problem:

You are given a string 
S
=
S
1
S
2
…
S
N
S=S 
1
​
 S 
2
​
 …S 
N
​
  consisting of 
N
N english lowercase letters.

Your aim is to convert 
S
S into an anti-palindrome. For this, you are allowed to do the following operation as many times as you want (even 0 times) :

Select an index 
i
i 
(
1
≤
i
≤
N
)
(1≤i≤N) and change 
S
i
S 
i
​
  to any other english lowercase letter.
Find the minimum number of operations needed to make 
S
S into an anti-palindrome.

Note: It can be proven that for the given constraints (
2
≤
N
≤
1
0
5
2≤N≤10 
5
 ), it is always possible to make 
S
S into an anti-palindrome using the operations.

Input Format
The first line of input will contain a single integer 
C
C, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer 
N
N — the length of the string 
S
S.
The next line contains the string 
S
S of length 
N
N.
Output Format
For each test case, output the minimum number of operations needed to make 
S
S into an anti-palindrome.

Constraints
1
≤
C
≤
5
⋅
1
0
5
1≤C≤5⋅10 
5
 
2
≤
N
≤
1
0
5
2≤N≤10 
5
 
S
S contains only english lowercase letters.
The sum of 
N
N over all testcases won't exceed 
1
0
5
10 
5
 .
Sample 1:
Input
Output
5
2
ab
2
aa
3
abc
3
aaa
3
abb
0
1
0
2
1
Explanation:
Testcase 1: The given string 
a
b
ab is already an anti-palindrome, since there is no way to rearrange the letters to make it into a palindrome. So, we don't need to do any operations on it to make it an anti-palindrome. Hence the answer is 
0
0.

Testcase 2: The given string 
a
a
aa is a palindrome, and so it is not an anti-palindrome. We can change it to 
a
b
ab using 
1
1 operation, and it becomes an anti-palindrome. Hence the answer is 
1
1.

Testcase 3: The given string 
a
b
c
abc is already an anti-palindrome, since there is no way to rearrange the letters to make it into a palindrome. So, we don't need to do any operations on it to make it an anti-palindrome. Hence the answer is 
0
0.

Testcase 4: The given string 
a
a
a
aaa is a palindrome, and so it is not an anti-palindrome. We can change it to 
a
b
c
abc using 
2
2 operations, and it becomes an anti-palindrome. There is no way to make it into an anti-palindrome using only 1 operation. Hence the answer is 
2
2.

Testcase 5: The given string 
a
b
b
abb is a semi-palindrome, since it can be rearranged to form 
b
a
b
bab which is a palindrome. So 
a
b
b
abb is not an anti-palindrome. We can change it to 
a
b
c
abc using 
1
1 operation, and it becomes an anti-palindrome. Hence the answer is 
1
1.
