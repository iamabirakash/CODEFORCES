[Akash and Dinner](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/CHEFDINE?tab=statement)
Akash got his money from CodeChef today, so he decided to have dinner outside.
He went to a restaurant having 
N
N items on the menu. The 
i
t
h
i 
th
  item on the menu belongs to the category 
A
i
A 
i
​
  and requires 
B
i
B 
i
​
  time to be cooked.

Akash wants to have a complete meal. Thus, his meal should have at least 
K
K distinct categories of food.
The total time required to get all the food Akash orders, is the sum of the cooking time of all the items in the order.

Help Akash find the minimum time required to have a complete meal or tell if it is not possible to do so.

Input Format
First line will contain 
T
T, the number of test cases. Then the test cases follow.
Each test case contains three lines:
The first line of each test case contains two space-separated integers 
N
N and 
K
K, denoting the number of dishes on the menu and the number of distinct categories in a complete meal.
The second line contains 
N
N space-separated integers where the 
i
t
h
i 
th
  integer is 
A
i
A 
i
​
 , denoting the category of the 
i
t
h
i 
th
  dish in the menu.
The third line contains 
N
N space-separated integers where the 
i
t
h
i 
th
  integer is 
B
i
B 
i
​
 , denoting the time required to cook the 
i
t
h
i 
th
  dish in the menu.
Output Format
For each test case, output in a single line, the minimum time required to have a complete meal.

If it is impossible to have a complete meal, print 
−
1
−1 instead.

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
,
K
≤
10
5
1≤N,K≤10 
5
 
1
≤
A
i
≤
10
5
1≤A 
i
​
 ≤10 
5
 
0
≤
B
i
≤
10
5
0≤B 
i
​
 ≤10 
5
 
The sum of 
N
N over all test cases won't exceed 
10
5
10 
5
 .
Sample 1:
Input
Output
4
3 1
1 2 3
2 1 3
8 3
1 3 2 2 4 1 3 5
3 3 0 1 2 4 1 4
1 1
5
1
5 3
1 1 2 2 1
1 1 0 3 5
1
3
1
-1
Explanation:
Test case 
1
1: Akash can choose dish with index 
2
2 having category 
2
2. The total time required to get the complete meal is 
1
1.

Test case 
2
2: Akash can choose dishes with index 
3
,
5
,
3,5, and 
7
7 from the menu.

Dish 
3
3: The dish has category 
2
2 and requires time 
0
0.
Dish 
5
5: The dish has category 
4
4 and requires time 
2
2.
Dish 
7
7: The dish has category 
3
3 and requires time 
1
1.
Thus, there are 
3
3 distinct categories and the total time to get the meal is 
0
+
2
+
1
=
3
0+2+1=3. It can be shown that this is the minimum time to get the complete meal.

Test case 
3
3: Akash can choose the only available dish having category 
5
5. The total time required to get the complete meal is 
1
1.

Test case 
4
4: The total number of distinct categories available is 
2
2, which is less than 
K
K. Thus, it is impossible to have a complete meal.
