#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
	int nx, ny; cin >> nx >> ny;
	for (int x = 10; x <= 15000; x++) {
		int n = (nx / 100) * x * x + ((nx /  10) % 10) * x + (nx % 10);
		int a = ny / 100;
		int b = (ny / 10) % 10;
		int c = (ny % 10) - n;
		if (b * b - 4 * a * c < 0)  {
			continue;
		}
		else {
			int disc = b * b - 4 * a * c;
			double y1 = (-1 * b + sqrt(disc)) / (2 * a);
			double y2 = (-1 * b - sqrt(disc)) / (2 * a);
			if ((int)(sqrt(disc)) == sqrt(disc)) {
			}
			if ((int)y1 == y1 && y1 >= 10 && y1 <= 15000) {
				cout << x << " " << y1 << "\n";
				break;
			}
			if ((int)y2 == y2 && y2 >= 10 && y2 <= 15000) {
				cout << x << " " << y2 << "\n";
				break;
			}
		}
	}
}


int32_t main() {
	freopen("whatbase.in", "r", stdin);
	freopen("whatbase.out", "w", stdout);
	int k; cin >> k;
	for (int i = 0; i < k; i++) {
		solve();
	}
}

