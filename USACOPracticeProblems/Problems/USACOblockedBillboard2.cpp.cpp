#include <bits/stdc++.h>
using namespace std;
struct Rectangle {
		int x1, y1, x2, y2;
};
int main() {
	Rectangle a;
	Rectangle b;
	int xTarp, yTarp;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2 >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	int xOverlap = max(min(a.x2, b.x2) - max(a.x1, b.x1), 0); 
	int yOverlap = max(min(a.y2, b.y2) - max(a.y1, b.y1),0);
	int axDistance = a.x2-a.x1;
	int ayDistance = a.y2-a.y1;
	int bxDistance = b.x2-b.x1;
	int byDistance = b.y2-b.y1;
	xTarp = axDistance - xOverlap;
	yTarp = ayDistance - yOverlap;
	if (b.y2 != a.y2) { // bad
		xTarp = axDistance;
	}
	if (b.x2 != a.x2) {
		yTarp = ayDistance;
	}
	cout << xTarp*yTarp << "\n";
}