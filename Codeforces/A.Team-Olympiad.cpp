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

void solve() {
    int n; cin>>n;

    vector<int> i1, i2, i3;

    for (int i = 1; i <= n; i++) {
        int p; cin>>p;

        if (p == 1)
            i1.push_back(i);
        else if (p == 2)
            i2.push_back(i);
        else if (p == 3)
            i3.push_back(i);
    }
    
    int mn = min({i1.size(), i2.size(), i3.size()});
    
     cout<<mn<<endl;

    forn(i, mn)
        cout<<i1[i]<<" "<<i2[i]<<" "<<i3[i]<<endl;
}



int main() {
    fast_io;
    solve();
    
}
