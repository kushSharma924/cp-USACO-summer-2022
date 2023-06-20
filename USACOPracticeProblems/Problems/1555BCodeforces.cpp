#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
	int wr, hr; cin >> wr >> hr;
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	int wt, ht; cin >> wt >> ht;
	bool yFit = (wr >= max(x2 - x1, wt)) && (hr >= y2 - y1 + ht);
	bool xFit = (hr >= max(y2 - y1, ht)) && (wr >= (x2 - x1) + wt);
	if (!xFit && !yFit) {
		cout << "-1" << "\n";
		return;
	}
	int rFit = 2^31-1;
	int lFit = 2^31-1;
	int uFit = 2^31-1;
	int dFit = 2^31-1;
	int best;
	if (xFit) {
		rFit = max(wt - x1, 0);
		lFit = max(wt - (wr - x2), 0);
	}
	if (yFit) {
		uFit = max(ht - y1, 0);
		dFit = max(ht - (hr - y2), 0);
	}
	if (yFit && xFit) {
		best = min(dFit, min(uFit, min(rFit, lFit)));
	}
	else if (yFit) {
		best = min(uFit, dFit);
	}
	else if (xFit) {
		best = min(lFit, rFit);
	}
	cout << best << "\n";
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		solve();
	}
}
