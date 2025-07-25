[Pseudo Sorted Array](https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PSEUDOSORT?tab=statement)
An array 
A
A of length 
N
N is said to be pseudo-sorted if it can be made non-decreasing after performing the following operation at most once.

Choose an 
i
i such that 
1
≤
i
≤
N
−
1
1≤i≤N−1 and swap 
A
i
A 
i
​
  and 
A
i
+
1
A 
i+1
​
 
Given an array 
A
A, determine if it is pseudo-sorted or not.

Input Format
The first line contains a single integer 
T
T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer 
N
N - the size of the array 
A
A.
The second line of each test case contains 
N
N space-separated integers 
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  denoting the array 
A
A.
Output Format
For each testcase, output YES if the array 
A
A is pseudo-sorted, NO otherwise.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

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
1
0
5
2≤N≤10 
5
 
1
≤
A
i
≤
1
0
9
1≤A 
i
​
 ≤10 
9
 
Sum of 
N
N over all test cases do not exceed 
2
⋅
1
0
5
2⋅10 
5
 
Sample 1:
Input
Output
3
5
3 5 7 8 9
4
1 3 2 3
3
3 2 1
YES
YES
NO
Explanation:
Test case 1: The array is already sorted in non-decreasing order.

Test case 2: We can choose 
i
=
2
i=2 and swap 
A
2
A 
2
​
  and 
A
3
A 
3
​
 . The resulting array will be 
[
1
,
2
,
3
,
3
]
[1,2,3,3], which is sorted in non-decreasing order.

Test case 3: It can be proven that the array cannot be sorted in non-decreasing order in at most one operation.
