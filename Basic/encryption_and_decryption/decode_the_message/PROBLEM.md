# Decode the Message

Johnny English is a spy and he has come across a picture that has several squares with different colors. Johnny suspects that the picture has some encoded message in different colors. As you are Johnny's partner, he asks you to write a program to decode the message.

You are given a list of hex color codes of the squares in the picture, decode it in the English language.

## Input Format
- The first line of input contains `t`, the number of test cases.
- Each test case consits of two lines.
    - The first line has integer `n`, the number of squares present in the picture.
    - The second line contains `n` space-separated 6 digit hex color codes of different squares.

## Output Format

Print exactly `t` lines, each containing the decoded message.

## Sample Input 0
```markdown
1
4
436f64 696e67 204269 747320
```
## Sample Output 0
```markdown
Coding Bits
```

## Sample Input 1
```markdown
2
2
436f64 696e67
2
426974 732020
```

## Sample Output 1
```markdown
Coding
Bits  
```
