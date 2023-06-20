#include <bits/stdc++.h>
using namespace std;

int main() {
	int x; int cowLoc; cin >> x >> cowLoc;
	int johnLoc = x;
	int distance = 0;
	int move = 1;
	bool up = true;
	while (johnLoc != cowLoc) {
		if (up) {
			for (int i = 0; i < move; i++) {
				johnLoc++;
				distance++;
				if (johnLoc == cowLoc) {
					cout << distance << "\n";
					return 0;
				}
			}
			move += move * 2;
			up = !up;
		}
		if (!up) {
			for (int i = 0; i < move; i++) {
				johnLoc--;
				distance++;
				if (johnLoc == cowLoc) {
					cout << distance << "\n";
					return 0;
				}
			}
			move += move * 2;
			up = !up;
		}
	}
}
