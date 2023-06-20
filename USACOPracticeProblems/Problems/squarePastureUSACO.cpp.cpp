#include <bits/stdc++.h>
using namespace std;
int main() {
	int x11, y11, x21, y21, x12, y12, x22, y22;
	cin >> x11 >> y11 >> x21 >> y21 >> x12 >> y12 >> x22 >> y22;
	int xLength = max(x21, x22) - min(x11, x12);
	int yLength = max(y21, y22) - min(y11, y12);
	int sideLength = max(xLength, yLength);
	cout << sideLength * sideLength << "\n";
}
