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

bool same(ll a, ll b) {
    if (a == b)
        return false;
    if (a + b == 7)
        return false;
    return true;
}

int main() {
    fast_io;
    
    ll t; cin>>t;
    
    while (t--) {
        ll n; cin>>n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
    
        vector<int> x(n);
        
        int mx = 0; 
    
        for (int i = 0; i < n; ++i) {
            int cur = mx + 1;
    
            if (i > 0 && same(a[i-1], a[i]))
                cur = max(cur, x[i-1] + 1);
    
            x[i] = cur;
    
            if (i > 0) {
                mx = max(mx, x[i-1]);
            }
        }
    
        int m = 0;
        for(int z : x)
            m = max(m, z);
        
        cout<<n-m<<endl;
        
    }
    
}
