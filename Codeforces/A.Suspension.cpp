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
            int n;cin>>n;
            
            int y, r;cin>>y>>r;
            
            int sr = r;
            int plyerleft = n - sr;
            int psy = y / 2;
            int sy = min(plyerleft, psy);
            
            int mx_susp = sr + sy;
            
            cout<<mx_susp<<endl;
        }
    }
};

int main() {
    fast_io;
    Solution().solve();
}
