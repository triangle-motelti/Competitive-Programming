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

template <typename T>
bool is_odd(T n) { return n % 2 != 0; }

class Solution {
private:
    string conv(int n) {
        string s(32, '0');
        for (int i = 0; i < 32; i++) {
            s[i] = char((n%2) + '0');
            n /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    
    ll rconv(string &s) {
        ll n = 0;
        for (char c : s) {
            n *= 2;
            n += (c == '1');
        }
        return n;
    }
    
public:
    void solve() {
        
        int n, k; cin >> n >> k;
        
        if (k % 2) {
            for (int i = 0; i < k; i++) {
                cout << n << " ";
            }
            cout << '\n';
            return ;
        }
        
        
        auto s = conv(n);
        int m = s.size();
        int p = 0;
        
        std::vector<string> res(k, string(m, '0'));
        std::vector<bool> pfx(k, true);
        
        for (int i = 0; i < m; i++) 
        {
            if (s[i] == '1') 
            {
                for (int j = 0; j < k; j++) {
                    if (j == p) continue;
                    res[j][i] = '1';
                }
                pfx[p] = false;
                p += 1, p %= k;
            } 
            
            else 
            {
                int cnt = 0;
                for (int j = 0; j < k; j++) {
                    cnt += (pfx[j] == false);
                }
                
                if (cnt%2) cnt -= 1;
                
                for (int j = 0, o = 0; j < k && o < cnt; j++) 
                {
                    if (pfx[j] == false) {
                        res[j][i] = '1';
                        o += 1;
                    }
                }
            }
        }
        
        for (auto &r : res) {
            cout << rconv(r) << " ";
        }
        
        cout << '\n';
    }
};

int main() {
    fast_io;
    int t; cin >> t;
    while (t--)
        Solution().solve();
}
