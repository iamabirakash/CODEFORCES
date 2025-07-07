[Prime Reversal](https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PRIMEREVERSE?tab=statement)
You are given two binary strings 
A
A and 
B
B, each of length 
N
N. You can perform the following operation on string 
A
A any number of times:

Select a prime number 
X
X.
Choose any substring of string 
A
A having length 
X
X and reverse the substring.
Determine whether you can make the string 
A
A equal to 
B
B using any (possibly zero) number of operations.

A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer 
N
N — the length of the strings 
A
A and 
B
B.
The second line contains the binary string 
A
A.
The third line contains the binary string 
B
B.
Output Format
For each test case, output on a new line, YES, if you can make the string 
A
A equal to 
B
B using any number of operations and NO otherwise.

You can print each character in uppercase or lowercase. For example, YES, yes, Yes, and yES are all identical.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
10
5
1≤N≤10 
5
 
A
i
A 
i
​
  and 
B
i
B 
i
​
  contain 
0
0 and 
1
1 only.
The sum of 
N
N over all test cases won't exceed 
10
5
10 
5
 .
Sample 1:
Input
Output
4
2
00
00
4
1001
0111
5
11000
10010
5
11000
11010
YES
NO
YES
NO
Explanation:
Test case 
1
1: Both the strings are equal. Thus, we do not need any operations.

Test case 
2
2: It can be shown that we cannot make the string 
A
A equal to 
B
B using any number of operations.

Test case 
3
3: Choose 
X
=
3
X=3 and reverse the substring 
A
[
2
,
4
]
=
100
A[2,4]=100. Thus, the string 
A
A becomes 
10010
10010 which is equal to 
B
B.

Test case 
4
4: It can be shown that we cannot make the string 
A
A equal to 
B
B using any number of operations.

