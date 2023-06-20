// #include <iostream>
// #include <vector>
// #include <bitset>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int n, m;
// vector<int> stalls(100);
// vector<int> prices;
// vector<int> starts;
// vector<int> ends1;
// vector<int> cools;
// vector<int> costs;
// vector<int> solutions;

// int allCowsGood(string b) {
//     int cost = 0;
//     for (int i = b.size() - 1; i >= 0; i--) {
//         int index = b.size() - 1 - i;
//         if (b[i] == '1') {
//             cost += costs[index];
//             for (int j = starts[index]; j <= ends1[index]; j++) {
//                     stalls[j - 1] -= cools[index];
//             }
//         }
//     }
//     bool allGood = true;
//     for (int i : stalls) {
//         if (i > 0) {
//             allGood = false;
//         }
//     }
//     for (int i = b.size() - 1; i >= 0; i--) {
//         int index = b.size() - 1 - i;
//         if (b[i] == '1') {
//             for (int j = starts[index]; j <= ends1[index]; j++) {
//                 stalls[j - 1] += cools[index];
//             }
//         }
//     }
//     if (allGood) {
//         return cost;
//     }
//     else {
//         return -1;
//     }
// }

// int main() {
// 	cin >> n >> m;
//     for (int i = 0; i < n; i++ ){
//         int start, end, cool; cin >> start >> end >> cool;
//         for (int j = start; j <= end; j++) {
//             if (start <= j && j <= end) {
//                 stalls[j - 1] += cool;
//             }
//         }
//     }
//     for (int i = 0; i < m; i++) {
//         int start, end, cool, price; cin >> start >> end >> cool >> price;
//         starts.push_back(start);
//         ends1.push_back(end);
//         cools.push_back(cool);
//         costs.push_back(price);
//     }
//     int z = pow(2, 10);
//     for (int i = 0; i < z; i++) {
//         string binary = bitset<10>(i).to_string();
//         int x = allCowsGood(binary);
//         if (x != -1 ) {
//             solutions.push_back(x);
//         }
//     }
//     sort(solutions.begin(), solutions.end());
//     cout << solutions[0] << "\n";
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<int> starts(N);
    vector<int> ends(N);
    vector<int> cooling(N);
    for (int i = 0; i < N; i++){
        cin >> starts[i] >> ends[i] >> cooling[i];
    }
    
    vector<int> a(M);
    vector<int> b(M);
    vector<int> p(M);
    vector<int> m(M);
    for (int i = 0; i < M; i++){
        cin >> a[i] >> b[i] >> p[i] >> m[i];
    }
    
    int min_cost = 0;
    vector<int> used(M, 0);
    for (int i = 0; i < N; i++){
        int max_cooling = 0;
        int max_cooling_index = -1;
        for (int j = 0; j < M; j++){
            if (used[j] == 0 && a[j] <= starts[i] && b[j] >= ends[i] && p[j] > max_cooling){
                max_cooling = p[j];
                max_cooling_index = j;
            }
        }
        if (max_cooling >= cooling[i]){
            used[max_cooling_index] = 1;
            min_cost += m[max_cooling_index];
        }
    }
    
    cout << min_cost << endl;
    
    return 0;
}