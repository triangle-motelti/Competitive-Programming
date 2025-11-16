#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ll t; cin>>t;
    
    while (t--) {
        ll n; cin>>n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin>>a[i];

        ll f = 0;
        for (ll i = 0; i < n; i++) {
            for (ll j = i + 1; j < n; j++) {
                if ((a[j] % a[i]) % 2 == 0) {
                    cout<< a[i] << " "<< a[j]<<"\n";
                    f = 1;
                    break;
                }
            }
            if (f)
                break;
        }
        if (!f)
		cout << -1 << "\n";
    }
}
