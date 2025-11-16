#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;cin>>n;
	int c = 0;
	int a = 0;
	while (c + (a * (a + 1)) / 2 <= n) {
	   c += (a * (a + 1)) / 2;
	   a++;
	}
	cout<<a - 1<<endl;
 
}
