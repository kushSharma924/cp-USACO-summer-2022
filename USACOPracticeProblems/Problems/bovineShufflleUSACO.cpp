#include<bits/stdc++.h>
using namespace std;
vector<int> reverseShuffle(vector<int> orderOfCows, vector<int> key) {
   vector<int> output;
   output.push_back(orderOfCows[key[0] - 1]);
   output.push_back(orderOfCows[key[1] - 1]);
   output.push_back(orderOfCows[key[2] - 1]);
   output.push_back(orderOfCows[key[3] - 1]);
   output.push_back(orderOfCows[key[4] - 1]);
   return output;
}
int main() {
   freopen("shuffle.in", "r", stdin);
   freopen("shuffle.out", "w", stdout);
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int N; cin >> N;
   vector<int> orderOfCows(N);
   vector<int> key(N);
   for (int &t : key) cin >> t;
   for (int &t : orderOfCows) cin >> t;
   for (int i = 0; i < 3; i++) {
       orderOfCows = reverseShuffle(orderOfCows, key);
   }
   for (int i : orderOfCows) {
       cout << i << "\n";
   }
}
 

