[Average Array](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/AVGARR?tab=statement)
You are given two integers 
N
N and 
X
X. Output an array 
A
A of length 
N
N such that:

−
1000
≤
A
i
≤
1000
−1000≤A 
i
​
 ≤1000 for all 
1
≤
i
≤
N
1≤i≤N.
All 
A
i
A 
i
​
  are distinct.
mean
(
A
)
=
X
mean(A)=X.
If there are multiple answers, print any. It is guaranteed that under the given constraints at least one array satisfying the given conditions exists.

As a reminder, the mean of an array 
B
B of size 
M
M is defined as: 
mean
(
B
)
=
∑
i
=
1
M
B
i
M
mean(B)= 
M
∑ 
i=1
M
​
 B 
i
​
 
​
 .

For example, 
mean
(
[
3
,
1
,
4
,
8
]
)
=
3
+
1
+
4
+
8
4
=
16
4
=
4
mean([3,1,4,8])= 
4
3+1+4+8
​
 = 
4
16
​
 =4.

Input Format
The first line contains a single integer 
T
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers 
N
N and 
X
X - the size of the array 
A
A and the mean of the array 
A
A.
Output Format
For each test case, output an array 
A
A of length 
N
N which satisfies the given conditions.

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
1000
1≤N≤1000
0
≤
X
≤
100
0≤X≤100
Sample 1:
Input
Output
3
3 7
5 1
1 10
5 10 6
1 2 3 4 -5
10
Explanation:
Test case 1: 
mean
(
[
5
,
10
,
6
]
)
=
5
+
10
+
6
3
=
21
3
=
7
mean([5,10,6])= 
3
5+10+6
​
 = 
3
21
​
 =7.

Test case 2: 
mean
(
[
1
,
2
,
3
,
4
,
−
5
]
)
=
1
+
2
+
3
+
4
+
(
−
5
)
5
=
5
5
=
1
mean([1,2,3,4,−5])= 
5
1+2+3+4+(−5)
​
 = 
5
5
​
 =1.

Test case 3: 
mean
(
[
10
]
)
=
10
1
=
10
mean([10])= 
1
10
​
 =10.
