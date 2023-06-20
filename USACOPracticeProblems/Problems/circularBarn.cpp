#include <bits/stdc++.h>
using namespace std; 

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);

	int numRooms; cin >> numRooms;
	vector<int> cowsInRooms(numRooms);
	for (int &t : cowsInRooms) cin >> t; 
	int bestSum = INT_MAX; 
	for (int i = 0; i < numRooms; i++) { 
		int currentSum = 0; 
		for (int j = i; j < i + numRooms; j++) { 
			currentSum += (j - i) * cowsInRooms[j % numRooms]; 
		}
		bestSum = min(bestSum, currentSum);
	}
	cout << bestSum; // time complexity: O(N^2), where N is the number of rooms
}