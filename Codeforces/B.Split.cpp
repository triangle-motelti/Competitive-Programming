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

class Solution {
    public:
    void solve() {
        ll t; cin>>t;
        
        while (t--) {
            ll n;cin>>n;
            
            map<ll, ll> c;
            ll n2 = 2*n;
            forn(i, n2) {
                ll x; cin>>x;
                c[x]++;
            }
            
            ll odd = 0, even = 0;
            for (auto &p : c) {
                if (is_odd(p.y))
                    odd++;
                else 
                    even++;
            }
            
            ll ans = odd + (2*even);
            
            if (odd == 0) {
                if (even % 2 != n % 2)
                    ans -= 2;
            }
            
            cout<<ans<<endl;
        }
    }
};

int main() {
    fast_io;
    Solution().solve();
}
