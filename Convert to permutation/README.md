[Convert to permutation](https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PERMUTATION?tab=statement)
You are given an array 
A
A of size 
N
N. In one operation, you can:

Choose an index 
i
i 
(
1
≤
i
≤
N
)
(1≤i≤N) and increase 
A
i
A 
i
​
  by 
1
1.
Find the minimum number of operations required to convert the array 
A
A into a permutation of size 
N
N. If it is impossible to do so, print 
−
1
−1.

Note that a permutation of size 
N
N contains each element from 
1
1 to 
N
N exactly once.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains the integer 
N
N — the size of the array.
The next line contains 
N
N space-separated integers, the elements of the array 
A
A.
Output Format
For each test case, output on a new line, the minimum number of operations required to convert the array 
A
A into a permutation of size 
N
N.
If it is impossible to do so, print 
−
1
−1.

Constraints
1
≤
T
≤
500
1≤T≤500
1
≤
N
≤
1000
1≤N≤1000
0
≤
A
i
≤
1000
0≤A 
i
​
 ≤1000
Sample 1:
Input
Output
4
4
3 1 1 2
3
0 3 3
3
3 2 1
3
2 0 1
3
-1
0
3
Explanation:
Test case 
1
1: We can convert the array 
A
A into a permutation using 
3
3 operations:

Operation 
1
1: Choose 
i
=
3
i=3 and increase 
A
i
A 
i
​
  by 
1
1. Thus, the array becomes 
A
=
[
3
,
1
,
2
,
2
]
A=[3,1,2,2].
Operation 
2
2: Choose 
i
=
3
i=3 and increase 
A
i
A 
i
​
  by 
1
1. Thus, the array becomes 
A
=
[
3
,
1
,
3
,
2
]
A=[3,1,3,2].
Operation 
3
3: Choose 
i
=
3
i=3 and increase 
A
i
A 
i
​
  by 
1
1. Thus, the array becomes 
A
=
[
3
,
1
,
4
,
2
]
A=[3,1,4,2].
It can be shown that this is the minimum number of operations required to convert 
A
A into a permutation.

Test case 
2
2: The given array cannot be converted into a permutation using any number of operations.

Test case 
3
3: The given array is already a permutation. Thus, we require 
0
0 operations.

Test case 
4
4: We can convert the array 
A
A into a permutation using 
3
3 operations:

Operation 
1
1: Choose 
i
=
1
i=1 and increase 
A
i
A 
i
​
  by 
1
1. Thus, the array becomes 
A
=
[
3
,
0
,
1
]
A=[3,0,1].
Operation 
2
2: Choose 
i
=
2
i=2 and increase 
A
i
A 
i
​
  by 
1
1. Thus, the array becomes 
A
=
[
3
,
1
,
1
]
A=[3,1,1].
Operation 
3
3: Choose 
i
=
3
i=3 and increase 
A
i
A 
i
​
  by 
1
1. Thus, the array becomes 
A
=
[
3
,
1
,
2
]
A=[3,1,2].
It can be shown that this is the minimum number of operations required to convert 
A
A into a permutation.

