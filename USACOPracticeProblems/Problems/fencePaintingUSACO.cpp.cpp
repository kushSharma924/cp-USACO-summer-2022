#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c ,d;
	cin >> a >> b >> c >> d;
	int overlap = max(min(b, d) - max(a, c), 0);
	cout << ((b - a) - overlap) + ((d - c) - overlap) + overlap;
}
