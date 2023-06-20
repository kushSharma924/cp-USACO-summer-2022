#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, k; cin >> n >> k;
	vector<char> vc(n);
	for (char &c : vc) cin >> c;
	sort(vc.begin(), vc.end());
	

	int nd = 0;
	for (int i = 0; i < n - 1; i++) {
		if (vc[i] == vc[i + 1] && vc[i] != '.') {
			nd++;
			vc[i] = '.';
			vc[i + 1] = '.';
		}
	}
	int md = nd / k;
	int cl = vc.size() - k * md * 2;
	//cout << nd << " " << k << " " << md << " " << cl << "\n";
	if (cl >= k) {
		cout << 2 * md + 1 << "\n";
	}
	else {
		cout << 2 * md << "\n";
	}
}


int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		solve();
	}
}
