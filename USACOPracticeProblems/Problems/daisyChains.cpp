#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> v(n);
	for (int &t : v) cin >> t;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int nf = j - i + 1;
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += v[k];
			}
			if (sum % nf == 0) {
				int av = sum / nf;
				for (int k = i; k <= j; k++) {
					if (v[k] == av) {
						ans++;
						break;
					}
				}
			}
		}
	}
	cout << ans << "\n";
}
