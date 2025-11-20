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
    ll t; cin>>t;
    
    while (t--) {
        ll n; cin>>n;
    
        vector<int> a(n), b(n);
        for (int &x : a)
            cin>>x;
        for (int &x : b)
            cin>>x;
        
        int d = 0, L = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                ++d;
                L = i;
            }
        }
        if (d % 2 == 0)
            cout<<"Tie"<<endl;
        else {
            if ((L + 1) % 2) 
                cout<<"Ajisai"<<endl;
            else 
                cout<<"Mai"<<endl;
        }

        
    }
}

int main() {
    fast_io;
    solve();
    
}
