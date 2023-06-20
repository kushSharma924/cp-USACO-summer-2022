#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("photo.in", "r", stdin);
	freopen("photo.out", "w", stdout);
	int n; cin >> n;
	vector<int> sums(n - 1);
	for (int &i : sums) cin >> i;
	vector<int> workingStarters;
	for (int i = 1; i <= n; i++) {
		vector<int> cur;
		cur.push_back(i);
		for (int j = 0; j < n - 1; j++) {
			cur.push_back(sums[j] - cur[j]);
		}
		bool works = true;
		set<int> checkRepeats;
		for (int i : cur) {
			checkRepeats.insert(i);
			if (i < 1 || i > n) {
				works = false;
			}
		}
		if (checkRepeats.size() != cur.size()) {
			works = false;
		}
		if (works) {
			workingStarters.push_back(cur[0]);
		}
	}
	sort(workingStarters.begin(), workingStarters.end());
	vector<int> printHelper;
	printHelper.push_back(workingStarters[0]);
	for (int j = 0; j < n - 1; j++) {
			printHelper.push_back(sums[j] - printHelper[j]);
	}
	for (int i = 0; i < n; i++) {
		cout << printHelper[i];
		if (i != n -1) {
			cout << " ";
		}
	}
	cout << "\n";
}
