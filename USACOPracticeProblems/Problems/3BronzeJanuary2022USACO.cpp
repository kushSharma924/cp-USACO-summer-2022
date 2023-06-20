#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void setIO() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
}
using namespace std;
int main() {
	setIO();
	int T; cin >> T;
	for (int j = 0; j < T; j++) {
		int N; cin >> N;
		vector<int> cows(N);
		for (int &t : cows) cin >> t;
		if (N == 1) {
			cout << 0 << "\n";
			continue;
		}
		if (N == 2) {
			if (cows[0] == cows[1]) {
				cout << 0 << "\n";
				continue;
			}
			else {
				cout << -1 << "\n";
				continue;
			}
		}
		int numOfOperations = 0;
		int numOfSame = 0;
		while (true) {
			cout << "Values: ";
			for (int i : cows) {
				cout << i << " ";
			}
			cout << "\n";
			for (int i = 1; i < N; i++) {
				if (cows[i] == cows[i - 1]) {
					numOfSame++;
				}
				else {
					numOfSame = 0;
					break;
				}
			}
			if (numOfSame == N - 1) {
				cout << numOfOperations << "\n";
				break;
			}
			int indexOfMax = -1;
			int large = -1;
			for (int i = 0; i < N; i++) {
				if (cows[i] > large) {
					large = cows[i];
					indexOfMax = i;
				}
			}
			int numOfOperationsToReduce = ((large - cows[indexOfMax - 1]) + (large - cows[indexOfMax + 1]));
			if (large - numOfOperationsToReduce > 0) {
				numOfOperations += numOfOperationsToReduce * 2;
				cows[indexOfMax] -= numOfOperationsToReduce;
				int temp = large - cows[indexOfMax + 1];
				cows[indexOfMax + 1] -= (large - cows[indexOfMax - 1]);
				cows[indexOfMax - 1] -= (temp);
	
			}
			else {
				cout << -1 << "\n";
				break;
			}
			for (int i = 0; i < N; i++) {
				if (cows[i] < 0) {
					cout << -1 << "\n";
					break;
				}
			}
		}
	}
}
