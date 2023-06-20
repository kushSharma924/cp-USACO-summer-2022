// Kush Sharma
// 1/30/2022
// Done
#include<iostream>
using namespace std;
void setIO() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
}
using namespace std;
int main() {
	setIO();
	string correctGrid;
	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;
		correctGrid += s;
	}
	string guessGrid;
	for (int i = 0; i < 3; i++) {
		string t;
		cin >> t;
		guessGrid += t;
	}
	int numYellow = 0;
	int numGreen = 0;
	for (int i = 0; i < 9; i++) {
		if (guessGrid[i] == correctGrid[i]) {
			numGreen++;
			correctGrid[i] = ' ';
			guessGrid[i] = '.';
		}
	}
	for (int i = 0; i < 9; i++) {
		char c = guessGrid[i];
		for (int j = 0; j < 9; j++) {
			if (c == correctGrid[j]) {
				numYellow++;
				correctGrid[j] = ' ';
				break;
			}
		}
	}
	cout << numGreen << "\n" << numYellow << "\n";
}
