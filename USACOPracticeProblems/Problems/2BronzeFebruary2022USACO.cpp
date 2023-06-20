#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;
	vector<int> fake(N);
	for (int &t : fake) cin >> t;
	vector<int> real(N);
	for (int &t : real) cin >> t;
	int maxDistance = 0;
	for (int i = 0; i < N; i++) {
		auto it = find(real.begin(), real.end(), fake[i]);
		int indexInReal = it - real.begin();
		if (indexInReal > i && indexInReal - i > maxDistance) maxDistance = indexInReal - i;
	}
	cout << maxDistance;
}
