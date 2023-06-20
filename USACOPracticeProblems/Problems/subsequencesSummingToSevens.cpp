#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
	int n; cin >> n;
	vector<int> first(7, -1);
	vector<int> prefixMod;
	int ans = 0;
	int x; cin >> x;
	prefixMod.push_back(x % 7);
	first[x % 7] = 0;
	for (int i = 1; i < n; i++) {
		int x; cin >> x;
		prefixMod.push_back((prefixMod[i - 1] + x % 7) % 7);
		if (first[prefixMod[i]] == -1) {
			first[prefixMod[i]] = i;
		}
		else {
			ans = max(ans, i - first[prefixMod[i]]);
		}
	}
	cout << ans << "\n";
}
