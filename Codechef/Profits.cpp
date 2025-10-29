//Chef is running a lemonade stand, and each lemonade costs him Rs. X to make.
//
//Chef will have N total customers coming to his lemonade stand today, with the i-th customer willing to spend Rs. i on a lemonade.
//So, the first customer is willing to spend Rs. 1, the second Rs. 2, the third Rs. 3 and so on.
//
//For each customer, Chef can choose whether to accept and provide him with lemonade (at the amount he is willing to pay), or reject him. Find the maximum profit Chef can make. Ignore any other costs.
//
//Input Format
//The first line of input will contain a single integer T, denoting the number of test cases.
//The first and only line of each test case contains 2 integers - N and X.
//Output Format
//For each test case, output on a new line the maximum profit Chef can make.
//
//Constraints
//1 ≤ T ≤ 100
//1 ≤ N, X ≤ 100


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;cin>>t;

    ll n, x;

    while (t--) {
        cin>>n>>x;

        ll res = 0;

        for (ll i = 0; i <= n; i++) {
            if (i >= x) {
                res += i - x;
            }
        }
        cout<<res<<endl;

    }

}

