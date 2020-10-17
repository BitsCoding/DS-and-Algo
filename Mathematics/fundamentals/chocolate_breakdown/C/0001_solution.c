/**
 * Solution of problem 'Chocolate Breakdown'.
 * @file 0001_solution.c
 * @author Nischay Sharma
 * @version 1.0
 * */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int L;
    int P;
    scanf("%d %d ",&L,&P);
    while(L>P)
        L-=P;
    printf("%d ",L);
    return 0;
}
