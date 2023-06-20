#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> hayBales;
vector<int> exploded;

void explode(int x, int t) {
	vector<int> nextExplode;
	for (int i : hayBales) {
		bool inExploded = false;
		for (int j : exploded) {
			if (j == i) {
				inExploded = true;
			}
		}
		if ((i >= x - t) && (i <= x + t) &&(!inExploded)) {
			exploded.push_back(i);
			nextExplode.push_back(i);
		}
	}
	for (int i : nextExplode) {
		explode(i, t + 1);
	}
}


int main() {
	freopen("angry.in", "r", stdin);
	freopen("angry.out", "w", stdout);
	cin >> N;
	hayBales = vector<int>(N);
	for (int &i : hayBales) cin >> i;
	int maxExploded = 0;
	for (int i : hayBales) {
		exploded.push_back(i);
		explode(i, 1);
		if (exploded.size() > maxExploded) {
			maxExploded = exploded.size();
		}
		exploded.clear();
	}
	cout << maxExploded << "\n";
}