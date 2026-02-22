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

int main() {
    
    ll l, n; cin>>n>>l;

    vector<ll> a(n);
    for (auto &x : a) cin>>x;
    

    sort(a.begin(), a.end());

    double maxd = max((double)a[0], (double)(l - a[n - 1]));

    for (int i = 1; i < n; i++) {
        double gap = (a[i] - a[i - 1]) / 2.0;
        maxd = max(maxd, gap);
    }

    cout<<fixed<<setprecision(10)<<maxd<<endl;

	

}
