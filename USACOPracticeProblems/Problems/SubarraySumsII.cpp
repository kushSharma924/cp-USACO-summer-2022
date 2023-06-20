#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, X; cin >> N >> X;
	vector<int> a(N);
	for (int &i : a) cin >> i;
	vector<long long> prefix(N + 1);
	map<long long, int> seen;
	prefix[0] = 0;
	prefix[1] = a[0];
	for (int i = 2; i < N + 1; i++) {
		prefix[i] = prefix[i - 1] + a[i - 1];
	}
	long long ans = 0;
	for (int i = 0; i < N + 1; i++) {
		ans += seen[prefix[i] - X];
		seen[prefix[i]]++;
	}
	cout << ans << "\n";
}
