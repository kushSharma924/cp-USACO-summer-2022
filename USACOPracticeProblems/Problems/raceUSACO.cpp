#include <bits/stdc++.h>

bool willSheMakeIt(int currentSpeed, int finalSpeed, int distanceLeft) {
	if (currentSpeed == finalSpeed) {
		return true;
	}
	if (currentSpeed == finalSpeed + 1) {
		return (distanceLeft > currentSpeed) ? true : false;
	}
	currentSpeed--;
	int distanceToStop = 0;
	for (int i = currentSpeed; i > finalSpeed; i--) {
		distanceToStop += i;
	}
	return (distanceToStop <= distanceLeft);
}

using namespace std;
int main() {
	// freopen("race.in", "r", stdin);
	// freopen("race.out", "w", stdout);
	int totalDistance; cin >> totalDistance;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int distanceLeft = totalDistance;
		int finalSpeed; cin >> finalSpeed;
		int time = 0;
		int currentSpeed = 0;
		while(distanceLeft > 0) {
			if (willSheMakeIt(currentSpeed + 1, finalSpeed, distanceLeft - (currentSpeed + 1))) {
				currentSpeed++;
				distanceLeft -= currentSpeed;
			}
			else if (willSheMakeIt(currentSpeed, finalSpeed, distanceLeft - currentSpeed)) {
				distanceLeft -= currentSpeed;
			}
			else if (willSheMakeIt(currentSpeed - 1, finalSpeed, distanceLeft - (currentSpeed - 1))) {
				currentSpeed--;
				distanceLeft -= currentSpeed;
			}
			// cout << time << " " << currentSpeed << " "<< distanceLeft << "\n";
			time++;
		}
		cout << time << "\n";
	}
}
