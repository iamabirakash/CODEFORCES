[Alternating Divisibility](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/ALTERNATEDIV?tab=statement)
JJ challenges the Chef to construct an array 
A
A of length 
N
N such that the following conditions hold:

A
i
A 
i
​
  divides 
A
i
+
1
A 
i+1
​
  when 
i
i is odd and 
1
≤
i
≤
N
−
1
1≤i≤N−1
A
i
A 
i
​
  does not divide 
A
i
+
1
A 
i+1
​
  when 
i
i is even and 
1
≤
i
≤
N
−
1
1≤i≤N−1
1
≤
A
i
≤
2
⋅
N
1≤A 
i
​
 ≤2⋅N
All 
A
i
A 
i
​
  are pairwise distinct
Can you help Chef complete JJ's challenge?

If multiple arrays satisfying the above conditions exist print any one of them.

It is guaranteed that under the given constraints, at least one array satisfying the above conditions exists.

Input Format
The first line will contain 
T
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer 
N
N - the length of the array 
A
A to be constructed.
Output Format
For each test case, output a single line containing 
N
N space-separated integers, denoting the elements of the array 
A
A you constructed.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
1
0
5
1≤N≤10 
5
 
It is guaranteed that the sum of 
N
N over all test cases does not exceed 
5
⋅
1
0
5
5⋅10 
5
 .
Sample 1:
Input
Output
3
4
1
6
1 3 2 4
2
1 5 6 12 3 9
Explanation:
Test case-1: 
[
1
,
3
,
2
,
4
]
[1,3,2,4] is a valid array because:

A
1
=
1
A 
1
​
 =1 divides 
A
2
=
3
A 
2
​
 =3.
A
2
=
3
A 
2
​
 =3 does not divide 
A
3
=
2
A 
3
​
 =2.
A
3
=
2
A 
3
​
 =2 divides 
A
4
=
4
A 
4
​
 =4.
Test case-3: 
[
1
,
5
,
6
,
12
,
3
,
9
]
[1,5,6,12,3,9] is a valid array because:

A
1
=
1
A 
1
​
 =1 divides 
A
2
=
5
A 
2
​
 =5.
A
2
=
5
A 
2
​
 =5 does not divide 
A
3
=
6
A 
3
​
 =6.
A
3
=
6
A 
3
​
 =6 divides 
A
4
=
12
A 
4
​
 =12.
A
4
=
12
A 
4
​
 =12 does not divide 
A
5
=
3
A 
5
​
 =3.
A
5
=
3
A 
5
​
 =3 divides 
A
6
=
9
A 
6
​
 =9.
