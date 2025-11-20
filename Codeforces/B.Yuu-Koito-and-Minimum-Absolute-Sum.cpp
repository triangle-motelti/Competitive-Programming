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
    
    while (t--) {
        ll n; cin>>n;
    
        vector<ll> a(n);
        forn(i, n) 
            cin >> a[i];
        ll l;
        if (a[0] != -1)
            l = a[0];
        else {
            if (a[n-1] != -1)
                l = a[n-1];
            else
                l = 0;
        }
        ll r;
        if (a[n-1] != -1)
            r = a[n-1];
        else {
            if(a[0] != -1)
                r = a[0];
            else
                r = 0;
        }
        a[0] = l;
        a[n-1] = r;
        for (int i = 1; i < n - 1; i++) {
            if (a[i] == -1) 
                a[i]=0;
        }
        cout<<abs(a[0] - a[n-1])<<endl;
        forn(i, n) {
            cout<<a[i];
            if (i < n - 1)
                cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    fast_io;
    solve();
    
}
