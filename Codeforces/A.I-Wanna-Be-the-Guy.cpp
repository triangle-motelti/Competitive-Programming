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

        vector<int> v;
        int x;
        
        int cnt; cin >> cnt;
        forn(i, cnt) {
            cin>>x;
            if (find(v.begin(), v.end(), x) == v.end())
                v.push_back(x);
        }

        cin>>cnt;
        forn(i, cnt) {
            cin >> x;
            if (find(v.begin(), v.end(), x) == v.end())
                v.push_back(x);
        }

        
        sort(v.begin(), v.end());

       
        bool ans = true;
        forn(i, n) {
            if (find(v.begin(), v.end(), i + 1) == v.end()) {
                ans = false;
                break;
            }
        }

        if (ans) 
            cout<<"I become the guy."<<endl;
        else 
            cout<<"Oh, my keyboard!"<<endl;
    }
};

int main() {
	Solution().solve();
}
