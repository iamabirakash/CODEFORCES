[HTML Tags](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/HTMLTAGS?tab=statement)
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
In addition to Competitive Programming, Chef recently developed an interest in Web Dev and started learning HTML. Now he wants to create his own HTML Code Editor. As a subproblem, he wants to check if a typed HTML closing tag has correct syntax or not.

A closing HTML tag must:

Start with "</"
End with ">"
Have only lower-case alpha-numeric characters as its body (between "</" and ">"). That is, each character of the body should either be a digit or a lower-case English letter.
Have a non-empty body.
Help Chef by printing "Success" if the tag is fine. If not, print "Error".

Input Format
The first line contains an integer 
T
T, the number of test cases. Then 
T
T test cases follow.
Each test case is a single line of input, a string describing the tag.
Output Format
For each test case, output in a single line, "Success" if it is a valid closing tag and "Error" otherwise (without quotes).

You may print each character of the string in uppercase or lowercase (for example, the strings "SuccEss", "success", "Success", "SUCCESS" etc. will all be treated as identical).

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
1≤ 
l
e
n
g
t
h
(
T
a
g
)
length(Tag) 
≤
1000
≤1000
The characters of the string belong to the ASCII range 
[
33
,
126
]
[33,126] (note that this excludes space.)
Sample 1:
Input
Output
5 
</h1>  
Clearly_Invalid  
</singlabharat>  
</5>  
<//aA>
Success  
Error  
Success
Success
Error
Explanation:
Test Cases 
1
,
3
,
4
1,3,4: The tags follow all mentioned constraints.

Test Case 
2
2: The tag doesn't contain opening and closing symbols and also includes characters other than lower-case alpha-numeric characters in its body.

Test Case 
5
5: The tag also includes an upper-case alpha-numeric character "A" and a non alpha-numeric character "/" in its body.
