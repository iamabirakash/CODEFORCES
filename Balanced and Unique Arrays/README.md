[Balanced and Unique Arrays](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/UNQEQ)
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
For a positive, 
even
even integer 
N
N, we call a pair of arrays 
A
A and 
B
B to be interesting if they satisfy the following conditions :

∣
A
∣
=
∣
B
∣
=
N
/
2
∣A∣=∣B∣=N/2 i.e. the length of array 
A
A is equal to the length of array 
B
B.

Each integer from 
1
1 to 
N
N occurs exactly once in exactly one of the arrays.

The 
i
t
h
i 
th
  prefix sum of 
A
A is not equal to 
i
t
h
i 
th
  prefix sum of 
B
B for all 
1
≤
i
≤
N
/
2
−
1
1≤i≤N/2−1.
Formally, 
∑
j
=
1
i
A
j
j=1
∑
i
​
 A 
j
​
  != 
∑
j
=
1
i
B
j
j=1
∑
i
​
 B 
j
​
  for all 
1
≤
i
≤
N
/
2
−
1
1≤i≤N/2−1

Sum of all elements in 
A
A is equal to sum of all elements in 
B
B i.e. 
∑
j
=
1
N
/
2
A
j
=
∑
j
=
1
N
/
2
B
j
j=1
∑
N/2
​
 A 
j
​
 = 
j=1
∑
N/2
​
 B 
j
​
 

You are given a positive, even integer 
N
N. If there exists an interesting pair of arrays, then print "YES" followed by an interesting pair for this given 
N
N. If there exists multiple interesting pairs of arrays for given 
N
N, you can print any. Print "NO" in a single line if no such pair exists.

Input Format
First line of input will contain 
T
T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, the integer 
N
N.
Output Format
For each test case, if there exists an interesting pair of arrays, say 
(
A
,
B
)
(A,B), then in the first line print "YES", in the second line print array 
A
A separated by spaces, and in third line print array 
B
B separated by spaces. Print "NO" in a single line if no such pair exists. If there are multiple answers, print any of them.

Constraints
1
≤
T
≤
1
0
5
1≤T≤10 
5
 
1
≤
N
≤
1
0
5
1≤N≤10 
5
 
N
N is guaranteed to be even.
Sum of 
N
N over all test cases doesn't exceed 
1
0
6
10 
6
 
Subtasks
Subtask 1 (100 points): Original constraints
Sample 1:
Input
Output
2
2
4
NO
YES
1 4
2 3
Explanation:
Test case 2: Consider 
A
=
[
1
,
4
]
A=[1,4] and 
B
=
[
2
,
3
]
B=[2,3]. Every integer from 
1
1 to 
4
4 occurs exactly once in exactly one of the arrays. Also, 
1
1st prefix sum of 
A
A is not equal to 
1
1st prefix sum of 
B
B (
1
≠
2
1=2). And sum of the elements is equal to 
5
5 for both arrays. So, 
(
A
,
B
)
(A,B) is an interesting pair.
