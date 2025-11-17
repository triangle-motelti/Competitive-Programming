/* ******************************************************* */
/*     triangle :    https://github.com/triangle-motelti   */
/* ******************************************************* */
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
#define x first
#define y second
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'

typedef long long ll;

void solve() {
    ll n; cin>>n;
    
    ll ch = 0;
    forn(i, n) {
        char x; cin>>x;
        
        if (x == 'A')
            ch++;
        else if (x == 'D')
            ch--;
    }
    
    if (ch > 0)
        cout<<"Anton"<<endl;
    else if (ch < 0)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl; 
    
}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

