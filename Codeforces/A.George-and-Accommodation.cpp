#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	
	int ans = 0;
	while (n--) {
	    int p, q; cin>>p>>q;
	    
	    int x = q - p;
	    if (x >= 2)
	        ans++;
	}
	
	cout<<ans<<'\n';
	
	
    
}
