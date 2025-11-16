#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define endl '\n'
 
void solve() {
    ll n, a; cin>>n>> a;
    
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    set<ll> s;
    s.insert(0);
    for (ll val : v) {
        ll p = 2 * val - a;
        if (p >= 0)
            s.insert(p);
        if (p - 1 >= 0)
            s.insert(p - 1);
        if (p + 1 >= 0)
            s.insert(p + 1);
    }
    
    vector<ll> c(s.begin(), s.end());
 
    ll m = -1;
    ll B = 0;
    
    for (ll b : c) {
        ll p = 0;
        if (b < a) {
            auto it = lower_bound(v.begin(), v.end(), (a + b + 1) / 2);
            p = distance(v.begin(), it);
        }
        else if (b > a) {
            auto it = upper_bound(v.begin(), v.end(), (a + b) / 2);
            p = distance(it, v.end());
        }
 
        if (p > m) {
            m = p;
            B = b;
        }
        else if (p == m)
            B = min(B, b);
    }
    cout<<B<<endl;
}
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
 
    while (t--) {
        solve();
    }
}

