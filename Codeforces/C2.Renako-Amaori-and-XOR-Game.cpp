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
        forn(i, n)
            cin>>a[i];
        forn(i, n)
            cin>>b[i];
        
        int A = 0, B = 0, d = 0;
        forn(i, n) { 
            A^=a[i];
            B^=b[i];
        }
        if (A==B) {
            cout<<"Tie"<<endl;
            continue;
        }
        
        int D=A^B, h=31;
        while (h > 0 && ((D>>h)&1)==0)
            --h;
            
        int o = 0, e = 0  ,l = -1;
        forn (i, n) {
            int f = a[i] ^ b[i];
            if ((f >> h) & 1) {
                l = i;
                if ((i+1)&1)
                    o=1;
                else 
                    e=1;
            }
        }
        if (o && !e) 
            cout<<"Ajisai"<<endl;
        else if (e && !o)
            cout<<"Mai"<<endl;
        else {
            if((l+1)&1)
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
