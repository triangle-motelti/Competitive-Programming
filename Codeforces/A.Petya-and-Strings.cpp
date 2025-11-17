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
    string s1, s2; cin>>s1; cin>>s2;
    
    // int s = s1.size();?
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    if (s1 == s2)
        cout << "0" << endl;
    else if (s1 < s2)
        cout << "-1" << endl;
    else 
        cout << "1" << endl;  
}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

