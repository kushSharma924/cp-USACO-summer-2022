#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);
	int n; cin >> n;
	vector<string> c = {"Annabelle", "Bessie", "Daisy", "Elsie", "Gertie", "Henrietta", "Maggie"};
	vector<int> m = {0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int x; cin >> x;
		for (int j = 0; j < 7; j++) {
			if (c[j] == s) {
				m[j] += x;
				break;
			}
		}
	}
	int mv = m[0];
	for (int i = 0; i < 7; i++) {
		if (m[i] < mv) {
			mv = m[i];
		}
	}
	int sm = n * 100 + 1;
	int ism = -1;
	for (int i = 0; i < 7; i++) {
		if (m[i] < sm && mv < m[i]) {
			sm = m[i];
			ism = i;
		}
	}
	int nsm = 0;
	for (int i = 0; i < 7; i++) {
		if (m[i] == sm) {
			nsm++;
		}
	}
	if (nsm != 1) {
		cout << "Tie" << "\n";
	}
	else {
		cout << c[ism] << "\n";
	}
}