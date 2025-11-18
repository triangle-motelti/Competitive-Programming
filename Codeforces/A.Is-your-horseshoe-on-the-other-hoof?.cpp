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
    vector<ll> v(4);
    for (int i = 0; i < 4; i++)
        cin>>v[i];
        
    // forn(i, 4)
    //     cout<<v[i]<<endl;
    
    unordered_map<ll, int> f;
    for (int i = 0; i < 4; i++) {
        f[v[i]]++;
    }

    ll ans = 0;
    for (auto& t : f) {
        if (t.y > 1)
            ans += t.y - 1; 
    }
    cout<<ans<<endl;
}

int main() {
    fast_io;
    solve();
    
}
