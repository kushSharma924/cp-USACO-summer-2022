#include <bits/stdc++.h>
using namespace std;
int main() {
	int m, n, k;
	string y;
	string l;
	cin >> m >> n >> k;
	for (int i = 0; i < m; ++i) {
		cin >> y;
		for (char c : y) {
			for (int j = 0; j < k; ++j) {
				l += c;
			}  
		}
		l += "\n";
	}
	for (int i = 0; i < k; ++i) {
		cout << l;
	}
}
