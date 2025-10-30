#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ll t;cin>>t;
    
    
    for(int test = 0; test < t; test++) {
        ll ro, x, d, n;
        cin>>ro>>x>>d>>n;
        
        string s;cin>>s;
        ll r1 = ro;
        ll r2 = 0;
        for(char c : s)
        {
            if(c == '1')
            {
                r2++;
                r1 = max(0LL, r1 - d);
            }
            else
            {
                if(r1 < x) {
                    r2++;
                    r1 = max(0LL, r1 - d);
                }
            }
        }
        cout<<r2<<endl;
    }
    
}

