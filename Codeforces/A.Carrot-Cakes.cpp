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
    ll n, t, k, d; cin>>n>>t>>k>>d;
    
    int o = (n+k - 1) / k;
    int o1 = o * t;
    
    ll b = 0, o2 = 0;
    while (b < n) {
        o2++;
        if (o2 % t == 0)
            b += k;
        if (o2 > d && (o2 - d) % t == 0)
            b += k;
    }
    
    if (o2 < o1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
    fast_io;
    solve();
    
}
