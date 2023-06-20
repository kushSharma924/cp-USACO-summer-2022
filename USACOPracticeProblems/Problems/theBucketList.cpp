#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
	int numCows; cin >> numCows;
	vector<int> startTimes(numCows);
	vector<int> endTimes(numCows);
	vector<int> bucketsPerTime(numCows);
	int startClock = 1001;
	int endClock = 1001;
	for (int i = 0; i < numCows; i++) {
		cin >> startTimes[i];
		startClock = min(startClock, startTimes[i]);
		cin >> endTimes[i];
		endClock = max(endClock, endTimes[i]);
		cin >> bucketsPerTime[i];
	}
	int maxBuckets = 0;
	for (int i = startClock; i <= endClock; i++) {
		int currentBuckets = 0;
		for (int j = 0; j < numCows; j++) {
			if ((startTimes[j] <= i) && (endTimes[j] >= i)) {
				currentBuckets+=bucketsPerTime[j];
			}
		}
		maxBuckets = max(maxBuckets, currentBuckets);
	}
	cout << maxBuckets << "\n";
}
