[Easy Pronunciation](https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK)
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 
4
4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string 
S
S consisting of 
N
N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters 
{
a
,
e
,
i
,
o
,
u
}
{a,e,i,o,u} and the consonants are the other 
21
21 characters.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer 
N
N, the length of string 
S
S.
The second line of each test case contains the string 
S
S.
Output Format
For each test case, output on a new line the answer — YES if 
S
S is easy to pronounce, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

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
S
S contains only lowercase Latin characters, i.e, the characters 
{
a
,
b
,
c
,
…
,
z
}
{a,b,c,…,z}
Sample 1:
Input
Output
5
5
apple
15
schtschurowskia
6
polish
5
tryst
3
cry
YES
NO
YES
NO
YES
Explanation:
Test case 
1
1: "
apple
apple" doesn't have 
4
4 or move consecutive consonants, which makes it easy to pronounce.

Test case 
2
2: "
schtsch
urowskia
schtschurowskia" has 
7
7 consecutive consonants, which makes it hard to pronounce.

Test case 
3
3: 
polish
polish doesn't contain 
4
4 or more consecutive consonants, so it's easy to pronounce.

Test case 
4
4: 
tryst
tryst contains 
5
5 consecutive consonants, making it hard to pronounce.

Test case 
5
5: 
cry
cry doesn't contain any vowels, but its length is less than 
4
4 so it's still easy to pronounce.
