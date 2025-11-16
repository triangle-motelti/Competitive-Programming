#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ll n;cin>>n;
    
    while (n--) {
        int n1;
        string s1, s2;
        cin >> n1 >> s1 >> s2;
        
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}

