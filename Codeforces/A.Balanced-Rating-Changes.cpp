#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
#define endl '\n'

int main() {
    fast_io;
    int n; cin>>n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin>>a[i];
        b[i] = a[i] / 2;
        if (a[i] < 0 && a[i] % 2 != 0)
            b[i]--;

        sum += b[i];
    }

    for (int i = 0; i < n && sum != 0; i++) {
        if (a[i] % 2 != 0) {
            b[i]++;
            sum++;
        }
    }

    for (auto x : b)
        cout<<x<<endl;

}
