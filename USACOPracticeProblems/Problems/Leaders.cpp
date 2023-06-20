#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<char> breeds(n);
	int numG = 0;
	int numH = 0;
	for (char &i : breeds) {
		cin >> i;
		if (i == 'G') {
			numG++;
		}
		if (i == 'H') {
			numH++;
		}
	}
	vector<int> lists(n);
	for (int &i : lists) cin >> i;

	bool gLeader = false;
	bool hLeader = false;
	int indexOfFirstG = -1;
	for (int i = 0; i < n; i++) {
		if (breeds[i] == 'G') {
			indexOfFirstG = i;
			break;
		}
	}
	int indexOfFirstH = -1;
	for (int i = 0; i < n; i++) {
		if (breeds[i] == 'H') {
			indexOfFirstH = i;
			break;
		}
	}
	int indexOfLastG = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (breeds[i] == 'G') {
			indexOfLastG = i;
			break;
		}
	}
	int indexOfLastH = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (breeds[i] == 'H') {
			indexOfLastH = i;
			break;
		}
	}
	if (lists[indexOfFirstH] > indexOfLastH ) {
		hLeader = true;
	}
	if (lists[indexOfFirstG] > indexOfLastG) {
		gLeader = true;
	}
	
	int validPairs;
	if (gLeader && hLeader) {
		validPairs = 1;
	}
	else {
		validPairs = 0;
	}
	for (int i = 0; i < n; i++) {
		if ((i == indexOfFirstG && gLeader ) || (i == indexOfFirstH && hLeader)) {
			continue;
		}
		if (breeds[i] == 'H' && gLeader) {
			if (indexOfFirstG - i > 0 && indexOfFirstG < lists[i]) {
				validPairs++;
			}
		}
		if (breeds[i] == 'G' && hLeader) {
			if (indexOfFirstH - i > 0 && indexOfFirstH < lists[i]) {
				validPairs++;
			}
		}
	}
	cout << validPairs << "\n";
}
