#include <iostream>
#include <cmath>
using namespace std;

int main() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string s; cin >> s;
	int crossingPairs = 0;
	for (int i = 0; i < 26; i++) {
		char c = alphabet[i];
		int firstOccurence = -1;
		int secondOccurence = -1;
		for (int j = 0; j < 52; j++) {
			if (s[j] == c && firstOccurence == -1) {
				firstOccurence = j;
			}
			else if (s[j] == c) {
				secondOccurence = j;
			}
		}
		int distance = secondOccurence - firstOccurence;
		for (int k = 0; k < 26; k++) {
			int numOfK = 0;
			for (int j = 1; j < distance; j++) {
				if (s[firstOccurence + j] == alphabet[k]) {
					numOfK++;
				}
			}
			if (numOfK == 1) {
				crossingPairs++;
			}
		}
	}
	cout << crossingPairs/2 << "\n";
}
