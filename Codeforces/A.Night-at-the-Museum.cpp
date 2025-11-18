/* ******************************************************* */
/* triangle : https://github.com/triangle-motelti */
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

/*  a doubly-linked cycle that contains a-z exactly once  */
struct Node {
    char ch;
    Node* next;
    Node* prev;
    Node(char c) : ch(c), next(nullptr), prev(nullptr) {}
};

void solve() {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (char c = 'a'; c <= 'z'; ++c) {
        Node* nn = new Node(c);
        if (!head) {
            head = nn;
            tail = nn;
        } else {
            tail->next = nn;
            nn->prev = tail;
            tail = nn;
        }
    }
    if (head) {
        tail->next = head;
        head->prev = tail;
    }

    string s; cin>>s;

    ll ans = 0;
    Node* cur = head;
    for (char target : s) {
        int forward = 0;
        Node* p = cur;
        while (p->ch != target) {
            p = p->next;
            ++forward;
        }

        int backward = 0;
        p = cur;
        while (p->ch != target) {
            p = p->prev;
            ++backward;
        }

        ans += min(forward, backward);
        cur = p;
    }

    cout<<ans<<endl;

    if (head) {
        Node* it = head;
        do {
            Node* nxt = it->next;
            delete it;
            it = nxt;
        } while (it != head);
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}
