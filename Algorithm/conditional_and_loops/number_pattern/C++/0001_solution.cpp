/**
 * solution of Problem 'Number pattern'.
 * @file 0001_solution.cpp
 * @author mohdishaq
 **/

#include<iostream>
using  namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        int temp = row;
        for (int column = 1; column <= row; column++, temp++) {
            cout << temp <<" ";
        }
        cout << endl;
    }
    return 0;
}

