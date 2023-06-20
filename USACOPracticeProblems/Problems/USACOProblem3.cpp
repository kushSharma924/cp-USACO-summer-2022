#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	vector<string> input;
	vector<int> output;
	for (int i = 0; i < m; i++) {
		string s; cin >> s;
		input.push_back(s);
		int x; cin >> x;
		output.push_back(x);
	}
	for (int i = 0; i < input.size(); i++) {
		for (int j = 0; j < input.size(); j++) {
			if (input[i] == input[j] && output[i] != output[j]) {
				cout << "LIE" << "\n";
				return;
			}
		}
	}
	for (int i = 0; i < n; i++) { // n = column number
		set<int> zeros;
		set<int> ones;
		for (int j = 0; j < m; j++) { // m = row number
			if (input[j].at(i) == '0') {
				zeros.insert(output[j]);
			}
			if (input[j].at(i) == '1') {
				ones.insert(output[j]);
			}
		}
		if (zeros.size() < 2 || ones.size() < 2) {
			cout << "OK" << "\n";
			return;
		}
	}
	cout << "LIE" << "\n";
}

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		solve();
	}
}
