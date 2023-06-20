#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, b, g;
	cin >> n;
	int num1 = 0, num2 = 0, num3 = 0;
	vector<int> v = {1, 2, 3};
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> g;
		a--;
		b--;
		g--;
		int place = v[b];
		v[b] = v[a];
		v[a] = place;
		if (v[g] == 1) {
			num1++;
		}
		if (v[g] == 2) {
			num2++;
		}
		if (v[g] == 3) {
			num3++;
		}
	}
	cout << max(max(num1, num2), num3) << "\n";
}
