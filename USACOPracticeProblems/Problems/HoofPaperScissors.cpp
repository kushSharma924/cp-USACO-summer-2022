#include <bits/stdc++.h>
using namespace std;

int numWins(string key, vector<pair<char, char>> v) {
	int w = 0;
	for (int i = 0; i < v.size(); i++) {
		int inf = 0;
		for (int j = 0; j < key.length() - 1; j++) {
			if (key.at(j) == v[i].first && key.at(j + 1) == v[i].second) {
				w++;
			}
		}
	}
	return w;
}

int main() {
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
	int n; cin >> n;
	vector<pair<char, char>> v;
	vector<int> w;
	for (int i = 0; i < n; i++) {
		char x, y; cin >> x >> y;
		if (x != y) {
			v.push_back({x, y});
		}
	}
	w.push_back(numWins("1231", v));
	w.push_back(numWins("1321", v));
	w.push_back(numWins("2132", v));
	w.push_back(numWins("2312", v));
	w.push_back(numWins("3123", v));
	w.push_back(numWins("3213", v));
	int wm = w[0];
	for (int i = 0; i < w.size(); i++) {
		if (wm < w[i]) {
			wm = w[i];
		}
	}
	cout << wm << "\n";
}
