#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	// freopen("balancing.in", "r", stdin);
	// freopen("balancing.out", "w", stdout);
    int N;
    cin >> N;
    vector<pair<int, int>> cows(N);
    for (pair<int, int> &p : cows) {
        cin >> p.first;
        cin >> p.second;
    }
    int bestXDivision = -1;
    int bestXDifference = 10001;
    for (int i = 2; i <= 1000; i += 2) {
        int XOnOneSide = 0;
        for (pair<int, int> p : cows) {
            if (p.first < i) {
                XOnOneSide++;
            }
        }
        int difference = (N - XOnOneSide) - XOnOneSide;
        if (bestXDifference > abs(difference)) {
            bestXDifference = difference;
            bestXDivision = i;
        }
    }
    int bestYDivision = -1;
    int bestYDifference = 10001;
    for (int i = 2; i <= 1000; i += 2) {
        int YOnOneSide = 0;
        for (pair<int, int> p : cows) {
            if (p.second < i) {
                YOnOneSide++;
            }
        }
        int difference = (N - YOnOneSide) - YOnOneSide;
        if (bestYDifference > abs(difference)) {
            bestYDifference = difference;
            bestYDivision = i;
        }
    }
    int numInBLQuad = 0;
    int numInBRQuad = 0;
    int numInTLQuad = 0;
    int numInTRQuad = 0;
    for (pair<int, int> &p : cows) {
        if (p.first > bestXDivision && p.second > bestYDivision) numInTRQuad++;
        if (p.first > bestXDivision && p.second < bestYDivision) numInBRQuad++;
        if (p.first < bestXDivision && p.second < bestYDivision) numInBLQuad++;
        if (p.first < bestXDivision && p.second > bestYDivision) numInTLQuad++;
    }
    cout << max(numInTLQuad, max(numInBLQuad, max(numInTRQuad, numInBRQuad)));
}