"""
 Solution of problem 'Even Sum'.
 @file 0001_solution.py
 @author Nischay Sharma
 @version 1.0
 """
num=int(input())

sum=0
for i in range(2,num+1):
    if i%2==0:
        sum+=i 
print(sum)