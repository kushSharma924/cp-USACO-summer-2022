#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);
	int N;
	string a, b;
	cin >> N >> a >> b;
	string s = "";
	for (int i = 0; i < N; i++) {
		if (a[i] == b[i]) {
			s += '1';
		}
		else {
			s += '0';
		}
	}
	int numOfGroups = 0;
	for (int i = 0; i < N - 1; i++) {
		if ((s[i] == '0') && (s[i + 1] == '1')) {
			numOfGroups++;
		}
	}
	if (s[N - 1] == '0') numOfGroups++;
	cout << numOfGroups << "\n";
}
