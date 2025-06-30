[Gcd of Subarrays](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/GCDSUBARRAYS)
You are given positive integers 
N
N and 
K
K.

You have to construct an array 
A
A of length 
N
N such that :

1
≤
A
i
≤
1
0
18
1≤A 
i
​
 ≤10 
18
 
∑
i
=
1
N
∑
j
=
i
N
F
(
i
,
j
)
=
K
∑ 
i=1
N
​
 ∑ 
j=i
N
​
 F(i,j)=K, where 
F
(
i
,
j
)
F(i,j) denotes the gcd of all elements of the subarray 
A
[
i
,
j
]
A[i,j].
If multiple such arrays exist, print any.
Report 
−
1
−1 if no such array exists.

Note that 
A
[
l
,
r
]
A[l,r] denotes the subarray 
[
A
l
,
A
l
+
1
,
…
,
A
r
−
1
,
A
r
]
[A 
l
​
 ,A 
l+1
​
 ,…,A 
r−1
​
 ,A 
r
​
 ].

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of single line of input.
The only line of each test case contains two space-separated integers 
N
N and 
K
K — the number of elements and required sum.
Output Format
For each test case, output on a new line 
N
N space-separated integers, denoting array 
A
A.
Report 
−
1
−1 if no such array exists.

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
100
1≤N≤100
1
≤
K
≤
1
0
18
1≤K≤10 
18
 
The sum of 
N
N over all test cases won't exceed 
1000
1000.
Sample 1:
Input
Output
3
1 5
2 4
3 1
5
1 2
-1
Explanation:
Test case 
1
1: The only possible array of size 
1
1 such that the sum of gcd of all subarrays is 
5
5 is 
A
=
[
5
]
A=[5].

Test case 
2
2: Consider an array of size 
2
2 as 
A
=
[
1
,
2
]
A=[1,2]. The subarrays of the array are:

[
1
]
[1]: The gcd of this subarray is 
1
1.
[
1
,
2
]
[1,2]: The gcd of this subarray is 
g
c
d
(
1
,
2
)
=
1
gcd(1,2)=1.
[
2
]
[2]: The gcd of this subarray is 
2
2.
The sum of gcd of all subarrays is 
1
+
1
+
2
=
4
1+1+2=4.

Test case 
3
3: It can be proven that there exists no subarray of size 
3
3 such that the sum of gcd of all subarrays of the array is 
1
1.
