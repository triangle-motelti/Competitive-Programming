/* ******************************************************* */
/*     triangle :  https://github.com/triangle-motelti     */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
// #define x first
#define y second
#define pb push_back
#define sort(a) sort(a.begin(), a.end());
#define revsort(a) sort(a.begin(), a.end(), greater<int>());
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forjn(j, n) for (int j = i + 1; j < int(n); j++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'
 
typedef long long ll;
 
template <typename T>
bool is_odd(T n) { return n % 2 != 0; }
 
class Solution {
public:
    void solve() {
        int t;cin>>t;
    
        while (t--) {
            int n; cin>>n;
            
            ll s = 0;
            int z = 0; 
            forn(i, n) {
                int b; cin>>b;
                s += b;
                if (b > 0)
                    z++;
            }
            ll ans = s - n + 1;
            if (ans > n) 
                ans = n;
            if (ans > z)
                ans = z;
            if (ans < 0) 
                ans = 0;
            cout<<ans<<endl;
        }
    }
};
 
int main() {
    fast_io;
    Solution().solve();
}
