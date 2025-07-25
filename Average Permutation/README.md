[Average Permutation](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/AVGPERM)
You are given an integer 
N
N.

Find a permutation 
P
=
[
P
1
,
P
2
,
…
,
P
N
]
P=[P 
1
​
 ,P 
2
​
 ,…,P 
N
​
 ] of the integers 
{
1
,
2
,
…
,
N
}
{1,2,…,N} such that sum of averages of all consecutive triplets is minimized, i.e.

∑
i
=
1
N
−
2
P
i
+
P
i
+
1
+
P
i
+
2
3
i=1
∑
N−2
​
  
3
P 
i
​
 +P 
i+1
​
 +P 
i+2
​
 
​
 
is minimized.

If multiple permutations are possible, print any of them.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains an integer N, the size of the permutation.
Output Format
For each test case, output on a new line a permutation which satisfies the above conditions.

Constraints
1
≤
T
≤
1000
1≤T≤1000
3
≤
N
≤
1
0
5
3≤N≤10 
5
 
The sum of 
N
N over all test cases won't exceed 
3
⋅
1
0
5
3⋅10 
5
 .
Sample 1:
Input
Output
2
4
3
3 2 1 4
3 2 1
Explanation:
Test case 
1
1: The sum is 
P
1
+
P
2
+
P
3
3
+
P
2
+
P
3
+
P
4
3
=
3
+
2
+
1
3
+
2
+
1
+
4
3
=
6
/
3
+
7
/
3
=
4.333
…
3
P 
1
​
 +P 
2
​
 +P 
3
​
 
​
 + 
3
P 
2
​
 +P 
3
​
 +P 
4
​
 
​
 = 
3
3+2+1
​
 + 
3
2+1+4
​
 =6/3+7/3=4.333… Among all possible permutations of 
{
1
,
2
,
3
,
4
}
{1,2,3,4}, this is one of the permutations which provides the minimum result.

Test case 
2
2: The sum is 
3
+
2
+
1
3
=
6
/
3
=
2
3
3+2+1
​
 =6/3=2. Every permutation of size 
3
3 will have this value, hence it is the minimum possible.
