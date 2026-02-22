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

int main() {
    fast_io;
    
    int n, k; cin>>n>>k;
    
    vector<int> a(n);
    int ans = 0;
    forn(i, n) {
        cin>>a[i];
    }
    forn(i, n) {
        if (a[i] >= a[k - 1] && a[i] != 0)
            ans++;
    }
    
    cout<<ans<<endl;
    
    
    
}
