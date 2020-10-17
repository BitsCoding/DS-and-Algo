"""
Solution of problem 'Even Sum'.
@file 0001_solution.py
@author Nischay Sharma
@version 1.0
"""

"""
Calculate the sum of even number in the problem 'Even_sum'
@param n int
@return result as sum of even numbers
"""
def even_sum(n):
    result=0
    for i in range(2, num+1):
        if i%2==0:
            result+=i 
    return result

if __name__ == "__main__":
    num=int(input())
    print(even_sum(num))
    