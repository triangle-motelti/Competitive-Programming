/* ******************************************************* */
/*     triangle :  https://github.com/triangle-motelti     */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define x first
#define y second
#define pb push_back
// #define sort(a) sort(a.begin(), a.end());
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
        
        bool r = false;
        bool m = true;
        int p = -1;
        forn(i, n) {
            int x, y; cin>>x>>y;
            if (x != y)
                r = true;
            if (i > 0) {
                if (p < x) 
                    m = false;
            }
            p = x;
        }
        
        if (r)
            cout<<"rated"<<endl;
        else {
            if (m) 
                cout<<"maybe"<<endl;
            else
                cout<<"unrated"<<endl;
        }
    }
};
 
int main() {
	Solution().solve();
}
