/* ******************************************************* */
/*     triangle :    https://github.com/triangle-motelti   */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define x first
#define y second
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'

typedef long long ll;

void solve() {
    ll n, f; cin>>n>>f;
    
    vector<pair<ll, ll>> w;
    forn(i, n) {
        ll num; cin>>num;
        w.pb({num, -1});
    }
    
    forn(i, n) {
        if (w[i].x <= f)
            w[i].y = 1;
        else
            w[i].y = 2;
    }
    
    ll ans = 0;
    forn(i, n)
        ans += w[i].y;
    
    cout<<ans<<endl;
    
}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

