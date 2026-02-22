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

template <typename T>
bool is_odd(T n) { return n % 2 != 0; }

int main() {
    fast_io;
    
    ll t; cin>>t;
    
    while (t--) {
        ll n; cin>>n;
        
        string ans = "yes";

        for (int i = 1; i <= n; i++) {
            int v; cin>>v;
            
            int ix = i;
            while (v % 2 == 0)
                v /= 2;
            while (ix % 2 == 0)
                ix /= 2;
                
            if (v != ix)
                ans = "no";
        }
        cout<<ans<<endl;
        
    }
    
}
