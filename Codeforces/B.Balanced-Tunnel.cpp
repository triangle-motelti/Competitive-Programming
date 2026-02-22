#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	
	vector<int> a(n), b(n);
	for (auto &x : a)
	    cin>>x;
	for (auto &x : b)
	    cin>>x;

    vector<int> p(n+1);
    for (int i = 0; i < n; i++)
        p[a[i]] = i;
    
    int f = 0, mp = n+1;
    
    for (int i = n-1; i >= 0; i--) {
        if (p[b[i]] > mp)
            f++;
        else
            mp = p[b[i]];
    }
    
    cout<<f<<'\n';
    
}
