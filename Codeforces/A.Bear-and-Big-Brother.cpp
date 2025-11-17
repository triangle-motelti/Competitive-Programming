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
    ll a, b; cin>>a>>b;
    
    if (a == b) {
        cout<<'1'<<endl;
        return;
    }

    int i = 1;
    while (true) {
        a *= 3; b *= 2;
        if (a > b)
            break;
        i++;
    }
    cout<<i<<endl;
}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

