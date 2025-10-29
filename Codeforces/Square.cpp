#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    
    for (ll i = 0; i < n; i++) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

