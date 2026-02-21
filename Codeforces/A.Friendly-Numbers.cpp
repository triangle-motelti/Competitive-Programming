#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define x first
#define y second
#define pb push_back
#define sort(a) sort(a.begin(), a.end());
#define revsort(a) sort(a.begin(), a.end(), greater<int>());
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())

ll sum(ll n) {
    ll s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    fast_io;
    
    ll t; cin>>t;
    
    while (t--) {
        ll x; cin>>x;
        int c = 0;
        
        for (ll y = x; y <= x + 100; ++y) {
            if (y - sum(y) == x)
                c++;
        }
        
        cout<<c<<endl;
    }
}
