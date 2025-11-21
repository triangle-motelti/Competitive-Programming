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
    int n; ll x; cin>>n>>x;
    
    vector<pair<char, ll>> q;
    char s;
    ll num;
    while (cin>>s>>num)
        q.pb({s, num});
    
    ll d = 0;
    forn(i, n) {
        if (q[i].x == '-' && q[i].y <= x)
            x -= q[i].y;
        else if (q[i].x == '-' && q[i].y > x)
            d++;
        if (q[i].x == '+')
            x += q[i].y;
    }
    cout<<x<<' '<<d<<endl;
}

int main() {
    fast_io;
    solve();
    
}
