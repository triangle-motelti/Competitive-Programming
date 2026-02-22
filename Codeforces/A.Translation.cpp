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
    
    string s1, s2; cin>>s1; cin>>s2;
    
    int l = 0, r = s1.size() - 1;
    
    for (int i = 0; i < s1.size(); i++) {
        if (s1.size() != s2.size()) {
            cout<<"NO"<<endl;
            return 0;
        }
        if (s1[l] == s2[r]) {
            l++;
            r--;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
