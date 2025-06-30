[Sort the String](https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/SRTARR)
You have a binary string 
S
S of length 
N
N. In one operation you can select a substring of 
S
S and reverse it. For example, on reversing the substring 
S
[
2
,
4
]
S[2,4] for 
S
=
11000
S=11000, we change 
1
100
0
→
1
001
0
11000→10010.

Find the minimum number of operations required to sort this binary string.
It can be proven that the string can always be sorted using the above operation finite number of times.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of 
2
2 lines of input.
The first line of each test case contains a single integer 
N
N — the length of the binary string.
The second line of each test case contains a binary string 
S
S of length 
N
N.
Output Format
For each test case, output on a new line — the minimum number of operations required to sort the binary string.

Constraints
1
≤
T
≤
2
⋅
1
0
5
1≤T≤2⋅10 
5
 
1
≤
N
≤
2
⋅
1
0
5
1≤N≤2⋅10 
5
 
Sum of 
N
N over all test cases does not exceed 
1
0
6
10 
6
 .
String 
S
S consists of only '
0
0's and '
1
1's.
Sample 1:
Input
Output
4
3
000
4
1001
4
1010
6
010101
0
1
2
2
Explanation:
Test case 
1
1: The string is already sorted, hence, zero operations are required to sort it.

Test case 
2
2: We can sort the string in the following way: 
100
1
1001 
→
→ 
0011
0011.

Test case 
3
3: We can sort the string in the following way:
1
01
0
1010 
→
→ 
1100
1100 
→
→ 
0011
0011.
It can be proven that this string cannot be sorted in less than 
2
2 operations.

Test case 
4
4: We can sort the string in the following way:
0
1010
1
010101 
→
→ 
00
10
11
001011 
→
→ 
000111
000111.
It can be proven that this string cannot be sorted in less than 
2
2 operations.

