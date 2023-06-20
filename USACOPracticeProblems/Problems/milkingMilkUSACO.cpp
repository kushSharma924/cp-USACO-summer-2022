#include <bits/stdc++.h>
using namespace std;
pair<int, int> pour(int a1, int a2, int c2) {
	if (a1 + a2 <= c2) {
		a2+=a1;
		a1 = 0;
	}
	else {
		a1 -= (c2 - a2);
		a2 = c2; 
	}
	pair<int, int> p = make_pair(a1, a2);
	return p;
}
int main() {
	int c1, c2, c3, a1, a2, a3;
	cin >> c1 >> a1 >> c2 >> a2 >> c3 >> a3;
	for (int i = 0; i < 100; ++i) {
		if (i % 3 == 0) {
			pair<int, int> t = pour(a1, a2, c2);
			a1 = t.first;
			a2 = t.second;
		}
		if (i % 3 == 1) {
			pair<int, int> t = pour(a2, a3, c3);
			a2 = t.first;
			a3 = t.second;
		}
		if (i % 3 == 2) {
			pair<int, int> t = pour(a3, a1, c1);
			a3 = t.first;
			a1 = t.second;
		}
	}
	cout << a1 << "\n" << a2 << "\n" << a3 << "\n"; 
}
