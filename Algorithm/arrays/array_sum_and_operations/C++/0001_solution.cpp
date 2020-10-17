/**
 * Solution of problem 'array_sum_and_operations'.
 * @file 001_solution.cpp
 * @author Nischay Sharma
 * @version 1.0
 * */
#include <iostream>
#include <vector>

#define M  1000000007
#define ll long long

// formula to find sum from one to 'n'.
#define SUM(n) ((n * (n - 1)) / 2)

using namespace std;

/**
 * Finds the appropriate value for the 'array_sum_and_operations' problem
 * @param N int
 * @param op vector of int
 * @return vector of int denoting sum of array after each operations.
 **/
vector<ll> performOperations(ll N, const vector<ll>& op) {
    vector<ll> result(op.size());
    ll first{1}, last{N};
    ll s{SUM(N) % M - 1};
    for (ll i{}; i < (ll)op.size(); i++) {
        
        /* Comparing 'op[i]' whether it is in range of 2' to 'N-1' or equal to
         * 'first' or 'last'*/
        if ((op[i] < N && op[i] >= 2) || op[i] == first || op[i] == last) {
            ll temp = first;
            first   = last;
            last    = temp;
        } else {
            first = op[i];
        }
        result[i] = (s + last + first) % M;
    }
    return result;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n, q;
        scanf("%lld %lld", &n, &q);
        vector<ll> op(q);
        for (ll i{}; i < q; i++) {
            scanf("%lld", &op[i]);
        }
        vector<ll> result = performOperations(n, op);
        for (ll i{}; i < q; i++) {
            printf("%lld\n", result[i]);
        }
    }
    return 0;
}