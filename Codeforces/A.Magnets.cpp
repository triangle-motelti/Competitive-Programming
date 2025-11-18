/* ******************************************************* */
/*     triangle :    https://github.com/triangle-motelti   */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define x first
#define y second
#define pb push_back
#define sort(a) sort(a.begin(), a.end());
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'

typedef long long ll;

void solve() {
    int n; cin>>n;
    
    vector<int> m(n);
    forn(i, n)
        cin>>m[i];
        
    int x = 0;
    forn(i, n) {
        if (m[i] != m[i+1])
            x++;
    }
    cout<<x<<endl;

}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

