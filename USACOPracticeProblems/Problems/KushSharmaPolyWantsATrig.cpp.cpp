#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void fastIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0);
	if (sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

// string derivate(String s) {
// 	string ans;
// 	if (s[0] == "-" && s[1] != "-") {

// 	}
// }

int main() {
	fastIO(); // file i/o compatabilities
	// implementing algorithm: c(n) = nth derivative of the fitting function at the 
	// point / n!
	cout << "Give me your function to eat so I can spit back a fitted one. \nThis is in the form AsinBx or AcosBx.\n - > " << "\n";
	int a = 0; cin >> a; // isn't c++ great? it automatically stops at text
	string f; cin >>setw(3) >> f;
	int b = 0; cin >> b;
	
}