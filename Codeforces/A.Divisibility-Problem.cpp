/* ******************************************************* */
/*     triangle :  https://github.com/triangle-motelti     */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define x first
#define y second
#define pb push_back
#define sort(a) sort(a.begin(), a.end());
#define revsort(a) sort(a.begin(), a.end(), greater<int>());
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'

typedef long long ll;

void solve() {
    ll t; cin>>t;
    
    ll ans = 0;
    while (t--) {
        ll a, b; cin>>a>>b;
        
        if (a % b == 0)
            cout<<0<<endl;
        else
            cout<<(b - a % b)<<endl; 
    }
}

int main() {
    fast_io;
    solve();
    
}
