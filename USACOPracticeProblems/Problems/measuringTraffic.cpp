#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("traffic.in", "r", stdin);
	freopen("traffic.out", "w", stdout);
	int numMiles; cin >> numMiles;
	vector<string> rampTypes(numMiles);
	vector<int> firstNums(numMiles);
	vector<int> secondNums(numMiles);
	for (int i = 0; i < numMiles; i++) {
		string s = "";
		cin >> s;
		rampTypes[i] = s;
		int firstNum; cin >> firstNum;
		firstNums[i] = firstNum;
		int secondNum; cin >> secondNum;
		secondNums[i] = secondNum;
	}
	int indexOfFirstNone = 0;
	for (string s : rampTypes) {
		if (s == "none") break;
		else {
			indexOfFirstNone++;
		}
	}
	pair<int, int> range = {firstNums[indexOfFirstNone], secondNums[indexOfFirstNone]};
	for (int i = indexOfFirstNone + 1; i < numMiles; i++) {
		if (rampTypes[i] == "none") {
			range.first = max(range.first, firstNums[i]);
			range.second = min(range.second, secondNums[i]);
		}
		if (rampTypes[i] == "off") {
			range.first = range.first - secondNums[i];
			range.second = range.second - firstNums[i];
		}
		if (rampTypes[i] == "on") {
			range.first = range.first + firstNums[i];
			range.second = range.second + secondNums[i];
		}
	}
	int indexOfLastNone = numMiles - 1;
	for (int i = numMiles - 1; i > -1; i--) {
		if (rampTypes[i] == "none") {
			indexOfLastNone = i;
			break;
		}
	}
	pair<int, int> range2 = {firstNums[indexOfLastNone], secondNums[indexOfLastNone]};
	for (int i = indexOfLastNone - 1; i > -1; i--) {
		if (rampTypes[i] == "none") {
			range2.first = max(range2.first, firstNums[i]);
			range2.second = min(range2.second, secondNums[i]);
		}
		if (rampTypes[i] == "off") {
			range2.first = range2.first + firstNums[i];
			range2.second = range2.second + secondNums[i];
		}
		if (rampTypes[i] == "on") {
			range2.first = range2.first - secondNums[i];
			range2.second = range2.second - firstNums[i];
		}
	}
	cout << max(0, range2.first) << " " << max(0, range2.second) << "\n";
	cout << max(0, range.first) << " " << max(0, range.second) << "\n";
}
