#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define endl '\n'
 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t; cin>>t;
    while (t--) {
        ll n; cin>>n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        
        int w = 1;
        for (ll i = 2; i < n; i += 2) {
            if (a[i - 1] < a[i]) {
                w = 0;
                break;
            }
        }
        if (w)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
 
}
