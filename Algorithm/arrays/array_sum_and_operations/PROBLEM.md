# Array Sum & Operations

You have an identity permutation of `N` integers as an array initially. An identity permutation of `N` integers is `[1,2,...,N-1,N]`. In this problem, you have to perform `Q` operations on the array. After each operation find `S`, the sum of all the elements in the array and output `S % 1,000,000,007` (here **%** is modulo operator).

The ![formula](https://render.githubusercontent.com/render/math?math=i^{th}) operation consists of an integer ![formula](https://render.githubusercontent.com/render/math?math=op_i). The operations to perform are as follows:-  
  
1. If the array contains ![formula](https://render.githubusercontent.com/render/math?math=op_i), swap the first and last elements in the array.
2. Else, replace the first element of array with ![formula](https://render.githubusercontent.com/render/math?math=op_i).

## Input Format
- The first line contain an integer `t`, number of test cases.  
- The first line of `t` test cases contain two space-separated integers `N` and `Q`.
- The second line of `t` test cases contain `Q` space-separated integers, ![formula](https://render.githubusercontent.com/render/math?math=op_i).

## Output Format
For each `t` test case print `Q` lines denoting `S % 1,000,000,007`, where `S` is the sum of array after each operation.

## Sample Input 0
```
2
3 2
2 4
9 4
1 10 3 0
```

## Sample Output 0
```
6
7
45
46
46
45
```
## Explanation 0

1. For `N = 3,`  
- Array is `[1, 2, 3]` after first operation for ![formula](https://render.githubusercontent.com/render/math?math=op_1=2) array is `[3, 2, 1]`, so `S = 6`  
- After second operation for ![formula](https://render.githubusercontent.com/render/math?math=op_2=4) array is `[4, 2, 1]`, so `S = 7`
2. For `N = 9,`  
- Array is `[1, 2, 3, 4, 5, 6, 7, 8, 9]` after first operation for ![formula](https://render.githubusercontent.com/render/math?math=op_1=1) array is `[9, 2, 3, 4, 5, 6, 7, 8, 1]`, so `S = 45`  
- After second operation for ![formula](https://render.githubusercontent.com/render/math?math=op_2=10) array is `[10, 2, 3, 4, 5, 6, 7, 8, 1]`, so `S = 46`
- After third operation for ![formula](https://render.githubusercontent.com/render/math?math=op_3=10) array is `[1, 2, 3, 4, 5, 6, 7, 8, 10]`, so `S = 46`  
- After fourth operation for ![formula](https://render.githubusercontent.com/render/math?math=op_4=10) array is `[0, 2, 3, 4, 5, 6, 7, 8, 10]`, so `S = 45`
