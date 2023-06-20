#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
	int N;
	cin >> N;
	vector<int> v(N);
	for (int &t : v) cin >> t;
	vector<int> v1 = v;
	sort(v1.begin(), v1.end());
	int numOfMoves = 0;
	for (int i = 0; i < N; i++) {
		if (v[i] != v1[i]) {
			numOfMoves++;
		}
	}
	cout << max(0, numOfMoves - 1);
}
