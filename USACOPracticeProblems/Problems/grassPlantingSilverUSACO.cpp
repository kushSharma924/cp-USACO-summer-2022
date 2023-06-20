#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);
	int numFields; cin >> numFields;
	vector<vector<int>> adjacencyList(numFields + 1);
	for (int i = 0; i < numFields - 1; i++) {
		int fromNode, toNode; cin >> fromNode >> toNode;
		adjacencyList[fromNode].push_back(toNode);
		adjacencyList[toNode].push_back(fromNode);
	}
	// for (vector<int> v : adjacencyList) {
	// 	for (int i : v) {
	// 		cout << i << " ";
	// 	}
	// 	cout << "\n";
	// }
	int maxSize = 1;
	for (int i = 0; i < adjacencyList.size(); i++) {
		int curSize = adjacencyList[i].size();
		if (curSize > maxSize) {
			maxSize = curSize;
		}
	}
	cout << maxSize + 1 << "\n";
}
