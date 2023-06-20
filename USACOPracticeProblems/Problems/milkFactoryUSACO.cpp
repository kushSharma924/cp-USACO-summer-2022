#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("factory.in", "r", stdin);
	freopen("factory.out", "w", stdout);
	int N; cin >> N;
	vector<vector<int>> graph;
	graph.resize(N);
	for (int i = 0; i < N - 1; i++) {
		int a; cin >> a; a--;
		int b; cin >> b; b--;
		graph[a].push_back(b);
	}
	for (int i = 0; i < N; i++) {
		int numOfi = 0;
		for (vector<int> u : graph) {
			for (int j : u) {
				if (j == i) {
					numOfi++;
				}
			}
		}
		if (numOfi == N - 1) {
			cout << i + 1 << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
}
