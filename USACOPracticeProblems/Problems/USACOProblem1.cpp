#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n; cin >> n;
	vector<long long> cows(n);
	for (long long &i : cows) cin >> i;
	sort(cows.begin(), cows.end());
	long long bestCost = pow(10, 6) + 1;
	long long mostMoney = 0;
	for (long long i = 0; i < n; i++) {
		long long curMostMoney = cows[i] * (n - i);
		if (curMostMoney > mostMoney) {
			bestCost = cows[i];
			mostMoney = curMostMoney;
		}
	}
	cout << mostMoney << " " << bestCost << "\n";
}
