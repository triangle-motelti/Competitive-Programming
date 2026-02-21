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
        ll n; cin>>n; cin.ignore();
        
        map<string, int> c;
        string l;
        while (getline(cin, l))
            c[l]++;
        
        string ans;
        int mx = 0;
        for (auto x : c) {
            if (x.second > mx) {
                mx = x.second;
                ans = x.first;
            }
        }
    
        cout<<ans<<endl;
    }
};
 
int main() {
	Solution().solve();
}
