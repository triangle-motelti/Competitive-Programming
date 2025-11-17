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
    vector<vector<int>> m;
    
    int in;
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        vector<int> row;
        while (ss>>in)
            row.pb(in);
        m.pb(row);
    }
    // for (const auto& row : m) {
        
    // }
    
    bool f = false;
    
    ll x = 0, y = 0;
    forn(i, sz(m)) { 
        forn(j, sz(m[i])) {
            if (m[i][j] == 1) { 
                x = i+1;
                y = j+1;
                f = true;
                break;
            }
        }
        if (f)
            break;
    }
    int i = 0;
    while (i < 5) {
        if (x < 3) {
            x++; 
            i++;
        }
        if (y < 3) {
            y++; 
            i++;
        }
        if (x > 3) {
            x--; 
            i++;
        }
        if (y > 3) {
            y--; 
            i++;
        }
        if (x == 3 && y == 3)
            break;
    }
    // cout<<x<<' '<<y<<endl;
    cout<<i<<endl;
}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

