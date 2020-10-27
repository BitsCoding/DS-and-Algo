/**
 * solution of Problem 'string_manipulation'.
 * @file 0001_solution.cpp
 * @author mohdishaq
 **/

#include <iostream>
typedef long long int ll;
using namespace std;

int main() {
    ll testcases;
    char string[1001], result[1001];
    cin >> testcases;
    while (testcases--) {
        cin >> string;
        int i = 0;
        while (string[i] != '\0') {
            if ((i + 1) % 2 != 0)
                result[i] = toupper(string[i]);
            else
                result[i] = tolower(string[i]);
            i++;
        }
        result[i] = '\0';
        cout << result << endl;
    }
    return 0;
}
