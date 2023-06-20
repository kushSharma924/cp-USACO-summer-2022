#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	vector<int> numbers(n);
	for (int &i : numbers) cin >> i;
	vector<int> sortedNumbers = numbers;
	sort(sortedNumbers.begin(), sortedNumbers.end());
	int numDifferences = 0;
	for (int i = 0; i < n; i++) {
		if (sortedNumbers[i] != numbers[i]) {
			numDifferences++;
		}
	}
	cout << numDifferences - 1;
}