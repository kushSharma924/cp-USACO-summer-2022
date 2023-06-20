#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
	int n; cin >> n;
	vector<int> prefixH = {0};
	vector<int> prefixP = {0};
	vector<int> prefixS = {0};
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s == "H") {
			prefixH.push_back(prefixH[prefixH.size() - 1] + 1);
			prefixP.push_back(prefixP[prefixP.size() - 1]);
			prefixS.push_back(prefixS[prefixS.size() - 1]);
		}
		if (s == "P") {
			prefixH.push_back(prefixH[prefixH.size() - 1]);
			prefixP.push_back(prefixP[prefixP.size() - 1] + 1);
			prefixS.push_back(prefixS[prefixS.size() - 1]);
		}
		if (s == "S") {
			prefixH.push_back(prefixH[prefixH.size() - 1]);
			prefixP.push_back(prefixP[prefixP.size() - 1]);
			prefixS.push_back(prefixS[prefixS.size() - 1] + 1);
		}
	}
	int maxAmount = 0;
	for (int i = 1; i <= n; i++) {
		int firstAmount = max(prefixH[i], max(prefixP[i], prefixS[i]));
		int secondAmount = max(prefixH[n] - prefixH[i], max(prefixP[n] - prefixP[i], prefixS[n] - prefixS[i]));
		int amount = firstAmount + secondAmount;
		if (amount > maxAmount) {
			maxAmount = amount;
		}
	}
	cout << maxAmount << "\n";
}
