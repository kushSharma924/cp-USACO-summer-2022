#include <bits/stdc++.h>
using namespace std;

int main() {
	int numAnimals; cin >> numAnimals;
	vector<vector<string>> feasibleSet;
	for (int i = 0; i < numAnimals; i++) {
		string animalName; cin >> animalName;
		int numTraits; cin >> numTraits;
		vector<string> animalVector;
		for (int j = 0; j < numTraits; j++) {
			string trait; cin >> trait;
			animalVector.push_back(trait);
		}
		feasibleSet.push_back(animalVector);
	}
	vector<string> eliminationVector;
	for (vector<string> v : feasibleSet) {
		for (string s : v) {
			eliminationVector.push_back(s);
		}
	}
	// find most common
	// delete animals without
	// continue until feasible set has 1 element
}
