[Trace of Matrix](https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/TRACE?tab=statement)
Read problems statements in Mandarin chinese and Vietnamese as well.
Chef is learning linear algebra. Recently, he learnt that for a square matrix 
M
M, 
t
r
a
c
e
(
M
)
trace(M) is defined as the sum of all elements on the main diagonal of 
M
M (an element lies on the main diagonal if its row index and column index are equal).

Now, Chef wants to solve some excercises related to this new quantity, so he wrote down a square matrix 
A
A with size 
N
×
N
N×N. A square submatrix of 
A
A with size 
l
×
l
l×l is a contiguous block of 
l
×
l
l×l elements of 
A
A. Formally, if 
B
B is a submatrix of 
A
A with size 
l
×
l
l×l, then there must be integers 
r
r and 
c
c (
1
≤
r
,
c
≤
N
+
1
−
l
1≤r,c≤N+1−l) such that 
B
i
,
j
=
A
r
+
i
−
1
,
c
+
j
−
1
B 
i,j
​
 =A 
r+i−1,c+j−1
​
  for each 
1
≤
i
,
j
≤
l
1≤i,j≤l.

Help Chef find the maximum trace of a square submatrix of 
A
A.

Input
The first line of the input contains a single integer 
T
T denoting the number of test cases. The description of 
T
T test cases follows.
The first line of each test case contains a single integer 
N
N.
N
N lines follow. For each 
i
i (
1
≤
i
≤
N
1≤i≤N), the 
i
i-th of these lines contains 
N
N space-separated integers 
A
i
,
1
,
A
i
,
2
,
…
,
A
i
,
N
A 
i,1
​
 ,A 
i,2
​
 ,…,A 
i,N
​
  denoting the 
i
i-th row of the matrix 
A
A.
Output
For each test case, print a single line containing one integer — the maximum possible trace.

Constraints
1
≤
T
≤
100
1≤T≤100
2
≤
N
≤
100
2≤N≤100
1
≤
A
i
,
j
≤
100
1≤A 
i,j
​
 ≤100 for each valid 
i
,
j
i,j
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
1
3
1 2 5
6 3 4
2 7 1
13
Explanation:
Example case 1: The submatrix with the largest trace is

6 3
2 7
which has trace equal to 
6
+
7
=
13
6+7=13. (This submatrix is obtained for 
r
=
2
,
c
=
1
,
l
=
2
r=2,c=1,l=2.)
