#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ll t; cin>>t;
 
    while (t--) {
        ll n;cin>>n;
 
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin>>a[i];
        
        ll x; cin>>x;
 
        ll mn = *min_element(a.begin(), a.end());
        ll mx = *max_element(a.begin(), a.end());
 
        if (x >= mn && x <= mx)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
 
}
