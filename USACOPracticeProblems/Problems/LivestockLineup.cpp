#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> ans;
vector<vector<int>> graph(9);
vector<bool> added(9);
vector<string> cows = {"", "Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};

void add(int x) {
	added[x] = true;
	ans.push_back(cows[x]);
	for (int i : graph[x]) {
		if (!added[i]) {
			add(i);
		}
	}
}

int indexOf(string s) {
	for (int i = 0; i < cows.size(); i++) {
		if (cows[i] == s) {
			return i;
		}
	}
}

int main() {
	freopen("lineup.in", "r", stdin);
	freopen("lineup.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int x = indexOf(s);
		string s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
		string t; cin >> t;
		int y = indexOf(t);
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for (int i = 1; i <= 8; i++) {
		if (graph[i].size() < 2 && !added[i]) {
			add(i);
		}
	}
	for (string s : ans) {
		cout << s << "\n";
	}
}
