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
    
    int x = 0, y = 0;
    for (char c : s1) {
        if (islower(c))
           x++;
        else if (isupper(c))
            y++;
    }
    if (x == y) {
        std::transform(s1.begin(), s1.end(), s1.begin(),
                   [](unsigned char c){ return std::tolower(c); });
        cout<<s1<<endl;
        return;
    }
    int s = s1.size();
    forn(i, s) {
        if (x > y) {
            std::transform(s1.begin(), s1.end(), s1.begin(),
                       [](unsigned char c){ return std::tolower(c); });
            cout<<s1<<endl;
            return;
        }
        else if (x < y) {
            std::transform(s1.begin(), s1.end(), s1.begin(),
                       [](unsigned char c){ return std::toupper(c); });
            cout<<s1<<endl;
            return;
        }
    }

}

int main() {
    fast_io;
    // ll t; cin>>t;
    
    // while (t--)
    solve();

}

