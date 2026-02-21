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
        ll n; cin>>n;
        
        if (n == 0) {
            cout<<"1"<<endl;
            return;
        }
        ll m = n % 4;
        if (m == 0)
            cout<<"6"<<endl;
        if (m == 1)
            cout<<"8"<<endl;
        if (m == 2)
            cout<<"4"<<endl;
        if (m == 3)
            cout<<"2"<<endl;
    }
};

int main() {
    fast_io;
    Solution().solve();
}
