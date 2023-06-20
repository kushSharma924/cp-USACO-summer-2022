#include <bits/stdc++.h>
using namespace std;

int n;
map<int, int> m;
vector<int> sorted;

int main() {
	freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		m.insert(make_pair(x, y));
		sorted.push_back(x);
	}
	sort(sorted.begin(), sorted.end());
	int minTime = sorted[0] + m[sorted[0]];
	for (int i = 1; i < sorted.size(); i++) {
		minTime = max(minTime, sorted[i]) + m[sorted[i]];
	}
	cout << minTime << "\n";
}
