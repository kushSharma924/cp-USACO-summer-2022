#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, b; cin >> n >> k >> b;
	vector<int> a(n + 1, 1);
	a[0] = 0;
	for (int i = 0; i < b; i++) {
		int x; cin >> x;
		a[x] = 0;
	}
	vector<int> prefix(n + 1);
	prefix[0] = 0;
	for (int i = 1; i <= n; i++) {
		prefix[i] = prefix[i - 1] + a[i];
	}
	for (int i : prefix) {
		cout << i << " ";
	}
	cout << "\n";
	cout << "  ";
	int ans = n + 1;
	for (int i = 1; i <= n - k + 1; i++) {
		int diff = (k - 1) - (prefix[i + k - 1] - prefix[i]);
		ans = min(ans, diff);
		cout << diff << " ";
	}
	cout << "\n";
	cout << ans << "\n";
}
