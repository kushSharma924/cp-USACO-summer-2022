#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
	int n, q;
	cin >> n >> q;
	vector<int> cows = {0};
	vector<int> prefixG(n + 1);
	vector<int> prefixH(n + 1);
	vector<int> prefixJ(n + 1);
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		cows.push_back(x);
	}
	for (int i = 1; i < cows.size(); i++) {
		if (cows[i] == 1) {
			prefixG[i] = prefixG[i - 1] + 1;
			prefixH[i] = prefixH[i - 1];
			prefixJ[i] = prefixJ[i - 1];
		}
		if (cows[i] == 2) {
			prefixH[i] = prefixH[i - 1] + 1;
			prefixG[i] = prefixG[i - 1];
			prefixJ[i] = prefixJ[i - 1];
		}
		if (cows[i] == 3) {
			prefixJ[i] = prefixJ[i - 1] + 1;
			prefixH[i] = prefixH[i - 1];
			prefixG[i] = prefixG[i - 1];
		}
	}
	for (int i = 0; i < q; i++) {
		int a, b; cin >> a >> b;
		cout << prefixG[b] - prefixG[a - 1] << " " << prefixH[b] - prefixH[a - 1] << " " << prefixJ[b] - prefixJ[a - 1] << "\n";
	}
}
