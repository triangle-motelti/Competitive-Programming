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
        ll n, k; cin>>n>>k;
        
        int ans = 0;

        while (n--) {
            string s; cin>>s;
    
            bool f[10] = {false};
            for (char c : s) {
                f[c - '0'] = true;
            }
    
            bool t = true;
            for (int d = 0; d <= k; d++) {
                if (!f[d]) {
                    t = false;
                    break;
                }
            }
    
            if (t) 
                ans++;
        }
        cout<<ans<<endl;

    }
};

int main() {
    fast_io; 
    Solution().solve();
}
