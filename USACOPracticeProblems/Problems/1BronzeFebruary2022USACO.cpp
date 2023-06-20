#include <vector>
#include <iostream>
using namespace std;

bool listNotEqual(vector<int> a) {
	if (a.size() == 1) {
		return false;
	}
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i] != a[i + 1]) return true;
	}
	return false;
}

void solve() {
	int N; cin >> N;
	vector<int> a(N);
	for (int &t : a) cin >> t;
	int numOfOperations = 0;
	while (listNotEqual(a)) {
		int smallestSum = 1000000;
		int smallestSumIndex = 0;
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i] + a[i + 1] < smallestSum) {
				smallestSum = a[i] + a[i + 1];
				smallestSumIndex = i;
			}
		}
		a[smallestSumIndex] = smallestSum;
		for (int i = smallestSumIndex + 1; i < a.size() - 1; i++) {
			a[i] = a[i + 1];
		}
		a.resize(N - 1);
		N--;
		numOfOperations++;
	}
	cout << numOfOperations << "\n";
}
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		solve();
	}
}
