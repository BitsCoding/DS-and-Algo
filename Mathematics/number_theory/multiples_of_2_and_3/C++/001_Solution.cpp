/**
 * solution of Problem 'multiples_of_2_and_3'.
 * @file 0001_solution.cpp
 * @author mohdishaq
 **/

#include <iostream>

typedef long long int ll;
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {  // this loop will run 't' times.
        ll N, sum{};
        cin >> N;
        for (ll j{1}; j <= N; j++) {
            if (j % 2 == 0 || j % 3 == 0) sum += j;
        }
        cout << sum << endl;
    }
    return 0;
}
