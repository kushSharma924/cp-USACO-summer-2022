#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> graph;
set<int> visited;

void dfs(int i) {
	visited.insert(i);
	for (int i : graph[i]) {
		bool inSet = false;
		for (int j : visited) {
			if (j == i) {
				inSet = true;
			}
		}
		if (!inSet) {
			dfs(i);
		}
	}
}

int main() {
	freopen("factory.in", "r", stdin);
	freopen("factory.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n + 1; i++) {
		graph.push_back(vector<int>());
	}
	for (int i = 0; i < n - 1; i++) {
		int x, y; cin >> x >> y;
		graph[y].push_back(x); // x - > y
	}
	for (int i = 1; i <= n; i++) {
		dfs(i);
		if (visited.size() == n) {
			cout << i << "\n";
			return 0;
		}
		else {
			visited.clear();
		}
	}
	cout << -1 << "\n";
}
