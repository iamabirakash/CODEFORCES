[Adjacent Sum Parity](https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ADJSUMPAR?tab=statement)
Chef has an array 
A
A of length 
N
N.

Chef forms a binary array 
B
B of length 
N
N using the parity of the sums of adjacent elements in 
A
A. Formally,

B
i
=
(
A
i
+
A
i
+
1
)
 
%
 
2
B 
i
​
 =(A 
i
​
 +A 
i+1
​
 )%2 for 
1
≤
i
≤
N
−
1
1≤i≤N−1
B
N
=
(
A
N
+
A
1
)
 
%
 
2
B 
N
​
 =(A 
N
​
 +A 
1
​
 )%2
Here 
x
 
%
 
y
x%y denotes the remainder obtained when 
x
x is divided by 
y
y.

Chef lost the array 
A
A and needs your help. Given array 
B
B, determine whether there exists any valid array 
A
A which could have formed 
B
B.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer 
N
N — the size of the array 
A
A.
The second line of each test case contains 
N
N space-separated integers 
B
1
,
B
2
,
…
,
B
N
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  denoting the array 
B
B.
Output Format
For each testcase, output YES if there exists a valid array 
A
A, NO otherwise.

You can print any character in any case. For example YES, Yes, yEs are all considered same.

Constraints
1
≤
T
≤
1000
1≤T≤1000
2
≤
N
≤
10
5
2≤N≤10 
5
 
B
i
∈
{
0
,
1
}
B 
i
​
 ∈{0,1}
The sum of 
N
N over all test cases do not exceed 
3
⋅
10
5
3⋅10 
5
 .
Sample 1:
Input
Output
4
2
0 0
2
1 0
4
1 0 1 0
3
1 0 0
YES
NO
YES
NO
Explanation:
Test case 1: One such valid array is 
A
=
[
3
,
3
]
A=[3,3].

Test case 2: It can be shown that no such arrays exist and are valid.

Test case 3: One such valid array is 
A
=
[
1
,
2
,
4
,
5
]
A=[1,2,4,5].

B
1
=
1
B 
1
​
 =1 since 
A
1
+
A
2
=
1
+
2
=
3
A 
1
​
 +A 
2
​
 =1+2=3 and 
3
 
%
 
2
=
1
3%2=1
B
2
=
0
B 
2
​
 =0 since 
A
2
+
A
3
=
2
+
4
=
6
A 
2
​
 +A 
3
​
 =2+4=6 and 
6
 
%
 
2
=
0
6%2=0
B
3
=
1
B 
3
​
 =1 since 
A
3
+
A
4
=
4
+
5
=
9
A 
3
​
 +A 
4
​
 =4+5=9 and 
9
 
%
 
2
=
1
9%2=1
B
4
=
0
B 
4
​
 =0 since 
A
4
+
A
1
=
5
+
1
=
6
A 
4
​
 +A 
1
​
 =5+1=6 and 
6
 
%
 
2
=
0
6%2=0
