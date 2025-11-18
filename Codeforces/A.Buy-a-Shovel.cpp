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
    int k, r; cin>>k>>r;
    
    int ans = 0;
    for (int i = 1; i <= 10; i++) {
        ans = i;
        int res = k * i;
        if (res % 10 == r || res % 10 == 0)
            break;
    }
    
    cout<<ans<<endl;
    
    
}

int main() {
    fast_io;
    solve();
    
}
