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
        int n; cin>>n;
        
        vector<string> g(n);

        forn(i, n)
            cin>>g[i];
    
        char d = g[0][0];
        char d1 = g[0][1];
    
        if (d == d1) {
            cout<<"NO"<<endl;
            return;
        }
  
        forn(i, n) {
            forn(j, n) {
                if (i == j || i + j == n - 1) {
                    if (g[i][j] != d) {
                        cout<<"NO"<<endl;
                        return;
                    }
                } else {
                    if (g[i][j] != d1) {
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
    
        cout<<"YES"<<endl;
    }
};

int main() {
    fast_io;
    Solution().solve();
}
