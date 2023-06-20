#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("triangles.in", "r",  stdin);
	freopen("triangles.out", "w", stdout);
	int n; cin >> n;
	vector<pair<int, int>> points;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		pair<int, int> point = {x, y};
		points.push_back(point);
	}
	int maxArea = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (i != j && j != k && i != k) {
					if (points[i].first == points[j].first) {
						if (points[i].second == points[k].second) {
							int base = max(points[i].second, points[j].second) - min(points[i].second, points[j].second);
							int height = max(points[i].first, points[k].first) - min(points[i].first, points[k].first);
							int area = base * height;
							if (maxArea < area) {
								maxArea = area;
							}
						}
					}
				}
			}
		}
	}
	cout << maxArea << "\n";
}
