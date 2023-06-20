#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	vector<pair<string, int>> locations;
	// take input
	for (int i = 0; i < n; i++) {
		string s; int x;
		cin >> s >> x;
		pair<string, int> p = {s, x};
		locations.push_back(p);
	}
	
	// bubble sort
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (locations[j].second > locations[j + 1].second) {
				pair<string, int> temp = locations[j];
				locations[j] = locations[j + 1];
				locations[j + 1] = temp;
			}
		}
	}
	// find minimum number of lies per value in locations
	vector<int> lies;
	for (int i = 0; i < n; i++) {
		int loc = locations[i].second;
		int numLies = 0;
		for (int j = 0; j < n; j++) {
			if (j != i && ((locations[j].first == "G" && locations[j].second > loc)) || (locations[j].first == "L" && locations[j].second < loc)) {
				numLies++;
			}
		}
		lies.push_back(numLies);
	}
	// find minimum value in lies and print
	int minval = lies[0];
	for (int i = 0; i < lies.size(); i++) {
		if (minval > lies[i]) {
			minval = lies[i];
		}
	}
	cout << minval << "\n";
}
