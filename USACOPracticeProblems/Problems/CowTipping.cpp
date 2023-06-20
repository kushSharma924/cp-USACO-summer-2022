#include <bits/stdc++.h>
using namespace std;

void t(vector<vector<char>>& v, int w, int h) {
	for (int r = 0; r < h; r++) {
		for (int c = 0; c < w; c++) {
			if (v[r][c] == '1') {
				v[r][c] = '0';
			}
			else if (v[r][c] == '0') {
				v[r][c] = '1';
			}
		}
	}
}

void pv(vector<vector<char>> v) {
	for (int r = 0; r < v.size(); r++) {
		for (int c = 0; c < v[r].size(); c++) {
			cout << v[r][c] << " ";
		}
		cout << "\n";
	}
}

void lm(int w, int h, vector<vector<char>>& v, vector<int>& a) {
	if (v[h - 1][w - 1] == '1') {
		t(v, w, h);
		a[0]++;
	}
	if (w != 1) {
		lm(w - 1, h, v, a);
	}
}

void um(int w, int h, vector<vector<char>>& v, vector<int>& a) {
	if (v[h - 1][w - 1] == '1') {
		t(v, w, h);
		a[0]++;
	}
	if (h != 1) {
		um(w, h - 1, v, a);
	}
}

int main() {
	freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);
	int n; cin >> n;
	vector<int> a = {0};
	vector<vector<char>> v;
	for (int r = 0; r < n; r++) {
		vector<char> vr;
		for (int c = 0; c < n; c++) {
			char x; x = cin.get();
			if (x == '\n') {
				c--;
				continue;
			}
			vr.push_back(x);
		}
		v.push_back(vr);
	}
	for (int i = n; i >= 1; i--) {
		lm(i, i, v, a);
		um(i, i, v, a);
	}
	cout << a[0] << "\n";
	//pv(v);
}
