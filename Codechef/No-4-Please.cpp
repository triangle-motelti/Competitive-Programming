/* ******************************************************* */
/*     triangle :  https://github.com/triangle-motelti     */
/* ******************************************************* */
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

bool BinarySearch(int x, const vector<int>& array) {
    int a = 0, b = array.size() - 1;
    while (a <= b) {
        int k = (a+b)/2;
        if (array[k] == x) {
            return true;
        }
        if (array[k] > x) b = k-1;
        else a = k+1;
    }
    return false;
}

void solve() {
    int t; cin>>t;
    
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        forn(i, n) cin>>a[i];
        sort(a);

        int o = 0, tw = 0, th = 0;
        forn(i, n) {
            if (a[i] == 1)
                o++;
            else if (a[i] == 2)
                tw++;
            else if (a[i] == 3)
                th++;
        }

        int d = 0;
        
        d = min(o, th);
        if (tw >= 2) 
            d += (tw - 1);

        cout<<d<<endl;
    }
}

int main() {
    fast_io;
    solve();
    
}
