#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("milkorder.in", "r", stdin);
	freopen("milkorder.out", "w", stdout);
	int N, M, K; cin >> N >> M >> K;
	int cows[N] = {0};
	int m[M];
	for (int &i : m) cin >> i;
	for (int i = 0; i < K; i++) {
		int val, index; cin >> val >> index;
		cows[index - 1] = val;
	}
	for (int i = M - 1; i >= 0; i--) {
		int ind = find(cows, cows + N, m[i]) - cows;
		if (ind >= N) {
			if (i == M - 1) {
				cows[N - 1] = m[i];
				continue;
			}
			int index = find(cows, cows + N, m[i + 1]) - cows;
			for (int j = index; j >= 0; j--) {
				if (cows[j] == 0) {
					cows[j] = m[i];
					break;
				}
			}
		}
	}
	for (int i : cows) {
		cout << i << " ";
	}
	cout << "\n";
	cout << find(cows, cows + N, 1) - cows + 1 << "\n";
}
