#include <bits/stdc++.h>
using namespace std;

int main() {
	// check negative
	int numMeasurements; cin >> numMeasurements;
	set<string> cowNames;
	vector<string> cowOrder;
	vector<int> numsOrder;
	vector<int> scoreChanges;
	for (int i = 0; i < numMeasurements; i++) {
		int x; cin >> x;
		numsOrder.push_back(x);
		string s; cin >> s;
		cowNames.insert(s);
		cowOrder.push_back(s);
		int y; cin >> y;
		scoreChanges.push_back(y);
	}
	vector<int> cowScores(cowNames.size());
	for (int &t : cowScores) t = 7;
	for (int i = 0; i < 100; i++) {
		int index = -1;
		for (int j = 0; j < numsOrder.size(); j++) {
			if (numsOrder[j] == i) {
				index = j;
			}
		}
		if (index != -1) {
			
		}
		else {
			continue;
		}
	}
}
