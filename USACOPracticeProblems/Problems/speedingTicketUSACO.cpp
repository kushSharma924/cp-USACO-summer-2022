#include <bits/stdc++.h>
using namespace std;
int main() {
	map<int, int> b;
	map<int, int> r;
	int z = 0;
	int p; cin >> p; int q; cin >> q;
	int start = 0;
	for (int i = 1; i <= p; ++i) {
		int x, y;
		cin >> x >> y;
		z += x;
		for (int j = start; j <= z; j++) {
			r[j] = y;
		}
		start += x;
	}
	z = 0;
	int stort = 0;
	for (int i = 1; i <= q; ++i) {
		int x, y;
		cin >> x >> y;
		z += x;
		for (int j = stort; j <= z; j++) {
			b[j] = y;
		}
		stort += x;
	}
	int best = 0;
	int over = 0;
	for (int i = 0; i < 100; i++) {
		if (r[i] < b[i]) {
			over = b[i] - r[i];
			best = max(best, over);
		}
	}
	cout << best << "\n";
}
