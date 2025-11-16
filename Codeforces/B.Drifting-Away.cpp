#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define endl '\n'
 
void solve() {
    string s; cin>>s;
    
    ll n = s.size();
    bool in = false;
    for (ll i = 0; i < n - 1; i++) {
        if ((s[i] == '>' || s[i] == '*') && (s[i + 1] == '<' || s[i + 1] == '*')) {
            in = true;
            break;
        }
    }
    
    if (in) {
        cout << -1 << endl;
        return;
    }
    
    ll ans = 0, l = 0, r = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '>' || s[i] == '*') {
            r++;
        }
        else {
            ans = max(ans, r);
            r = 0;
        }
    }
    
    ans = max(ans, r);
    for (ll i = 0; i < n; i++) {
        if (s[i] == '<' || s[i] == '*') {
            l++;
        }
        else {
            ans = max(ans, l);
            l = 0;
        }
    }
    ans = max(ans, l);
    cout<<ans<<endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    
    while (t--)
        solve();
}

