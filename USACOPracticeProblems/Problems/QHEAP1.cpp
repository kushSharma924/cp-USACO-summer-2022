#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x == 1) {
			int y; cin >> y;
			s.insert(y);
		}
		if (x == 2) {
			int y; cin >> y;
			s.erase(y);
		}
		if (x == 3) {
			cout << *s.begin() << "\n";
		}
	}
}
