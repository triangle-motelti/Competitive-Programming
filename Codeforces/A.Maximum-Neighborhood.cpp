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
            
            vector<vector<int>> grid(n, vector<int>(n));
 
            int val = 1;
            forn(i, n) {
                forn(j, n)
                    grid[i][j] = val++;
            }
    
            int maxcost = 0;
    
            forn(i, n) {
                forn(j, n) {
                    int cost = grid[i][j];
                    if (i > 0)
                        cost += grid[i-1][j];
                    if (i < n-1) 
                        cost += grid[i+1][j];
                    if (j > 0) 
                        cost += grid[i][j-1];
                    if (j < n-1) 
                        cost += grid[i][j+1];
                    if (cost > maxcost) 
                        maxcost = cost;
                }
            }
            cout<<maxcost<<endl;
        }
    }
};
 
int main() {
    fast_io;
    Solution().solve();
}
