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
    
    int n, b; cin>>n>>b;
    
    int mx = b;
    
    vector<int> a(n);
    for(auto &x : a)
        cin>>x;
        
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int buy = b/a[i];
            int m = b%a[i];
            int sell = buy*a[j]+m;
            if (sell>mx)
                mx=sell;
        }
    }
    cout<<mx<<endl;
    
}
