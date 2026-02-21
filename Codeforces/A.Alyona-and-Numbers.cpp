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

class Solution {
public:
    void solve() {
        ll n, m; cin>>n>>m;
        
        vector<ll> x(5, 0), y(5, 0);
        
        for (int i = 1; i <= n; i++)
            x[i % 5]++;
            
        for (int i = 1; i <= m; i++)
            y[i % 5]++;
            
        ll ans = x[0] * y[0] + x[1] * y[4] + x[2] * y[3] + x[3] * y[2] + x[4] * y[1];

        cout<<ans<<endl;
    }
};

int main() {
    fast_io; 
    Solution().solve();
}
