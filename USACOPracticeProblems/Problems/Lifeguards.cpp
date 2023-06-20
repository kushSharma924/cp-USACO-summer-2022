#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);

	int n; cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	int mt = 0;
	for (int i = 0; i < n; i++) {
		set<int> t;
		for (int j = 0; j < 1000; j++) {
			for (int k = 0; k < n; k++) {
				if (v[k].first <= j && j < v[k].second && k != i) {
					t.insert(j);
				}
			}
		}
		if (t.size() > mt) {
			mt = t.size();
		}
	}
	
	cout << mt << "\n";
}
