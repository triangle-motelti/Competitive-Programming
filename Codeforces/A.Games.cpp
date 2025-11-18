/* ******************************************************* */
/* triangle : https://github.com/triangle-motelti */
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
    int t; cin>>t;
    
    vector<pair<int, int>> g;
    pair<int, int> temp;
    while (cin>>temp.x>>temp.y)
        g.pb(temp);
        
    // for (auto &p : g)
    //     cout<<p.x<<" "<<p.y<<endl;
    
    int ans = 0;
    forn(i, t) {
        for (int j = i+1; j < g.size(); j++) {
            if (g[i].x == g[j].y)
                ans++;
            if (g[i].y == g[j].x)
                ans++;
        }
    }
    
    cout<<ans<<endl;
    
    
}

int main() {
    fast_io;
    solve();
    
}
