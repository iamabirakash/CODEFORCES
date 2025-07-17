[String Deletions](https://www.codechef.com/problems/STRDEL7?tab=statement)
You are given a binary string 
S
S of size 
N
N, and can perform the following operation on it:

Pick 
3
3 integers 
i
,
j
,
k
i,j,k such that 
1
≤
i
<
j
<
k
≤
∣
S
∣
1≤i<j<k≤∣S∣ and 
S
i
≠
S
j
,
S
j
≠
S
k
S 
i
​
 =S 
j
​
 ,S 
j
​
 =S 
k
​
 , then delete 
S
j
S 
j
​
  from the string (concatenating the parts formed).
Find the minimum possible length of the string after performing some number (possibly 
0
0) of operations on it.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
N
N - the length of the string 
S
S.
The second line contains 
S
S - a binary string of length 
N
N.
Output Format
For each test case, output on a new line the minimum final length of the binary string 
S
S.

Constraints
1
≤
T
≤
10
4
1≤T≤10 
4
 
3
≤
N
≤
2
⋅
10
5
3≤N≤2⋅10 
5
 
S
i
∈
{
0
,
1
}
S 
i
​
 ∈{0,1}
The sum of 
N
N over all test cases does not exceed 
2
⋅
10
5
2⋅10 
5
 .
Sample 1:
Input
Output
3
3
101
3
100
4
1010
2
3
3
Explanation:
Test Case 1 : We can choose 
i
=
1
,
j
=
2
,
k
=
3
i=1,j=2,k=3 and delete 
S
2
=
0
S 
2
​
 =0 to get 
S
=
11
S=11. No further operations are possible.

Test Case 2 : No operations are possible.

