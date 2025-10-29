#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> g(n);int e=0;int o=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> g[i];
            if (g[i] %2==0)
                e++;
            else
                o++;
        }
 
        ll a = 0, b = n - 1;
 
        if (e&&o) {
            sort(g.begin(), g.end());
        }
 
        for (ll i = 0; i < n; i++)
            cout << g[i] << " ";
        cout << "\n";
    }
    return 0;
}

