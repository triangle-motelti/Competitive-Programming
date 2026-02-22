#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	
	vector<int> a(n);
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for (auto &x : a) {
        cin >> x;
        if (x == 1)
            c1++;
        else if (x == 2)
            c2++;
        else if (x == 3)
            c3++;
        else
            c4++;
    }

    int ans = c4; 
    while (c3 > 0) {
        ans++;
        c3--;
        if (c1 > 0) c1--;
    }
    while (c2 >= 2) {
        ans++;
        c2 -= 2;
    }
    if (c2 == 1) {
        ans++;
        c1 -= min(2, c1);
    }
    while (c1 > 0) {
        ans++;
        c1 -= 4;
    }

    cout<<ans<<endl;

}
