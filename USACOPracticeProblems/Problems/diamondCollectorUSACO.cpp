#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
	int N; cin >> N;
	int k; cin >> k;
	vector<int> diamonds(N);
	for (int & t : diamonds) cin >> t;
	int smallest = 10001;
	int largest = -1;
	for (int i : diamonds) {
		largest = max(largest, i);
		smallest = min(smallest, i);
	}
	int maxElements = 0;
	for (int i = 0; i <= largest; i++) {
		int numOfElements = 0;
		for (int j : diamonds) {
			if (i <= j && j <= i + k) {
				numOfElements++;
			}
		}
		maxElements = max(maxElements, numOfElements);
	}
	cout << maxElements << "\n";
}
