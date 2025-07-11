[String Game](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/STRAME)
Zlatan and Ramos are playing a game on a binary string 
S
S of length 
N
N.
Zlatan and Ramos make alternating moves with Zlatan going first.

In one move, a player will:

Select an index 
i
i 
(
1
≤
i
<
N
)
(1≤i<N) such that 
S
i
≠
S
i
+
1
S 
i
​
 =S 
i+1
​
  and delete both 
S
i
S 
i
​
  and 
S
i
+
1
S 
i+1
​
  from the string 
S
S. Note that 
N
N gets reduced by 
2
2 when both characters are deleted. If a player cannot select any such index 
i
i, he loses the game.
Determine the winner of the game if both players play optimally.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer 
N
N — the length of the binary string.
The next line contains a binary string 
S
S of length 
N
N.
Output Format
For each test case, if Zlatan will win the game, output Zlatan. Otherwise, output Ramos.

You can output each letter of the string in uppercase or lowercase. For example, Ramos, ramos, RAMOS, and rAmOS are all considered same.

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
 .
S
S consists of 
0
0 and 
1
1 only.
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
5
1
0
2
11
2
10
3
111
3
101
Ramos
Ramos
Zlatan
Ramos
Zlatan
Explanation:
Test case 
1
1: Zlatan goes first and has no move to make. Thus, Ramos wins.

Test case 
2
2: Zlatan goes first and has no move to make. Thus, Ramos wins.

Test case 
3
3: Zlatan goes first and selects 
i
=
1
i=1 where 
S
1
≠
S
2
S 
1
​
 =S 
2
​
 . Thus, he removes 
S
1
S 
1
​
  and 
S
2
S 
2
​
 .
Since the string is empty now, Ramos has no move to make and Zlatan wins.

Test case 
4
4: Zlatan goes first and has no move to make. Thus, Ramos wins.

Test case 
5
5: Zlatan goes first and selects 
i
=
1
i=1 where 
S
1
≠
S
2
S 
1
​
 =S 
2
​
 . Thus, he removes 
S
1
S 
1
​
  and 
S
2
S 
2
​
 .
Since the string only has length 
1
1 now, Ramos has no move to make and Zlatan wins.

