#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	int n; cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
	vector<int> prefix = {0};
	for (int i = 1; i <= n; i++) {
		prefix.push_back((((prefix[i - 1] + a[i - 1]) % n) + n) % n);
	}
	map<int, int> rs;
	int ans = 0;
	for (int i = 0; i <= n; i++) {
		ans += rs[prefix[i]];
		rs[prefix[i]]++;
	}
	cout << ans << "\n";
}