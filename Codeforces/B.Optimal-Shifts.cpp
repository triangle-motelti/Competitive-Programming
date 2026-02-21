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
        int t; cin>>t;
        
        while (t--) {
            int n; cin>>n;
            // vector<int> a(n);
            // for (int &x : a) cin>>x;
            string s; cin>>s;
            // int cntz = count(s.begin(), s.end(), '0');
            // if (cntz == 0) {
            //     cout<<"0"<<endl;
            //     break;
            // }
            int ans = 0;
            s += s;
            for (int i = 0; i < n; ++i) {
                int x = 0;
                while (s[i] && s[i] == '0') {
                    i++;
                    x++;
                    // cout<<"hi"<<endl;
                }
                ans = max(ans, x); 
            }
            // if (is_odd(cntz))
            //     ans = 1;
            // else
            //     ans = 2;
            
            cout<<ans<<endl;
        }
    }
};

int main() {
    fast_io;
    Solution().solve();
}
