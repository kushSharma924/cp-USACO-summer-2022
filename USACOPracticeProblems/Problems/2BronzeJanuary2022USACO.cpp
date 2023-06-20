#include<iostream>
#include<vector>
using namespace std;
void setIO() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
}
int beats(vector<int> die1, vector<int> die2) {
	int score = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (die1[i] > die2[j]) {
				score++;
			}
			else if (die1[i] < die2[j]) {
				score--;
			}
		}
	}
	return score;
}
int main() {
	setIO();
	int T;cin >> T;
	for (int z = 0; z < T; z++) {
		vector<int> die1(4);
		vector<int> die2(4);
		for (int &t : die1) cin >> t;
		for (int &t : die2) cin >> t;
		int x = beats(die1, die2);
		if (abs(x) <= 4) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
}
