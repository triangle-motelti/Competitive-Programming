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
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define swap(a, b) (a) ^= (b), (b) ^= (a), (a) ^= (b);
#define sz(a) int((a).size())
#define endl '\n'

typedef long long ll;

void solve() {
    string s1; cin>>s1;
    
    sort(s1);
    // int s = s1.size();
    // forn (i, s)
    // cout<<s1<<endl;
    
    unordered_set<char> seen;
    string res;
    for (char c : s1) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            res += c;
        }
    }
    int ans = res.size();
    
    if (ans % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

