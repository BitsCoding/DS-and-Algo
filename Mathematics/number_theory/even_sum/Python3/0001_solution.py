"""
Solution of problem 'Even Sum'.
@file 0001_solution.py
@author Nischay Sharma
@version 1.0
"""

def even_sum(n):
"""Calculate the sum of even number in the problem 'Even_sum'

Parameters
----------
n : int

Returns
------
int
    sum of even numbers
"""
    result=0
    for i in range(2, num+1):
        if i%2==0:
            result+=i 
    return result

if __name__ == "__main__":
    num=int(input())
    print(even_sum(num))
