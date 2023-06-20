#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Rectangle {
	ll x1, y1, x2, y2;
};
int main() {
	Rectangle w;
	Rectangle a;
	Rectangle b;
	ll x = 0;
	cin >> w.x1 >> w.y1 	>> w.x2 >> w.y2 >> a.x1 >> a.y1 >> a.x2 >> a.y2 >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	ll areaW = (w.x2 - w.x1) * (w.y2 - w.y1);
	ll areaA = (max(min(w.x2, a.x2) - max(w.x1, a.x1), x)) * (max((min(w.y2, a.y2) - max(w.y1, a.y1)), x));
	ll areaB = (max(min(w.x2, b.x2) - max(w.x1, b.x1), x)) * (max((min(w.y2, b.y2) - max(w.y1, b.y1)), x));
	ll areaOverlap = (max(min(min(a.x2, w.x2), min(w.x2, b.x2)) - max(max(w.x1, a.x1), max(b.x1, w.x1)), x)) * (max((min(min(w.y2, a.y2), min(w.y2, b.y2)) - max(max(a.y1, w.y1), max(w.y1, b.y1))), x));
	areaW -= areaA;
	areaW -= areaB;
	areaW+=areaOverlap;
	if (areaW > 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
