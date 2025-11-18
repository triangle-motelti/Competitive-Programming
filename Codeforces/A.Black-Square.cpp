/* ******************************************************* */
/*     triangle :    https://github.com/triangle-motelti   */
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
    vector<int> c(4);
    forn(i, 4)
        cin>>c[i];
    
    string s; cin>>s;

    vector<int> g;
    for (char ch : s)
        g.pb(ch - '0');
    
    // for (int x : g)
    //     cout << x << "\n";
    
    int size = g.size();
    int sum = 0;
    forn (j, size) {
        int arr = g[j];
        if (arr == 1)
            sum += c[0];
        if (arr == 2)
            sum += c[1];
        if (arr == 3)
            sum += c[2];
        if (arr == 4)
            sum += c[3];
    }
        
    cout<<sum<<endl;

}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

