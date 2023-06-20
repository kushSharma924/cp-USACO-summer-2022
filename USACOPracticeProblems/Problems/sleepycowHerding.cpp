#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	int a, b, c; cin >> a >> b >> c;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	if (a + 2 == c) {
		cout << 0 << "\n";
	}
	else if (a + 2 == b || b + 2 == c){
		cout << 1 << "\n";
	}
	else {
		cout << 2 << "\n";
	}
	if (abs(a -  b) < abs(b - c)) {
		cout << abs(b - c) - 1 << "\n";
	}
	else {
		cout << abs(a - b) - 1 << "\n";
	}
}
