#include <bits/stdc++.h>
using namespace std;

void solve() {
	map<char, set<char>> repeats;
	map<char, char> letters;
	string input;
	string output;
	cin >> input >> output;
	for (int i = 0; i < input.size(); i++) {
		repeats[input[i]].insert(output[i]);
		letters[input[i]] = output[i];
	}
	for (pair p : repeats) {
		if (p.second.size() > 1) {
			cout << -1 << "\n";
			return;
		}
	}
	int num3 = 0;
	int numDiff = 0;
	for (pair p : letters) {
		if (p.first != p.second) {
			numDiff++;
		}
	}
	for (pair p : letters) {
		if (letters[p.second] == p.first && p.second != p.first) {
			num3++;
		}
	}
	num3 /= 2;
	cout << numDiff - 2 * num3 + 3 * num3 << "\n";
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
