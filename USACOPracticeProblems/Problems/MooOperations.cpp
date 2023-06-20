#include <iostream>
using namespace std;

void solve() {
	string s; cin >> s;
	if (s.size() >= 3) {
		bool hasMoo = false;
		for (int i = 0; i <= s.size() - 3; i++) {
			if (s.substr(i, 3) == "MOO") {
				hasMoo = true;
			}
		}
		if (hasMoo) {
			cout << s.size() - 3 << "\n";
			return;
		}
		bool hasOOOMOM = false;
		for (int i = 0; i <= s.size() - 3; i++) {
			if (s.substr(i, 3) == "OOO" || s.substr(i, 3) == "MOM") {
				hasOOOMOM = true;
			}
		}
		if (hasOOOMOM) {
			cout << s.size() - 2 << "\n";
			return;
		}
		bool hasO = false;
		for (int i = 1; i <= s.size() - 2; i++) {
			if (s[i] == 'O') {
				hasO = true;
			}
		}
		if (hasO) {
			cout << s.size() - 1 << "\n";
			return;
		}
		cout << -1 << "\n";
	}
	else {
		cout << -1 << "\n";
		return;
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		solve();
	}
}
