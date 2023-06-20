#include <bits/stdc++.h>
using namespace std;

int main() {
    set<set<char>> oneWin;
    set<set<char>> twoWin;
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    freopen("tttt.in",  "r", stdin);
    freopen("tttt.out", "w", stdout);
	vector<string> gameBoard(3);
    for (string &s : gameBoard) cin >> s;
    for (string s : gameBoard) {
        set<char> row;
        for (int i = 0; i < s.length(); i++) {
            row.insert(s.at(i));
        }
        if (row.size() == 1) {
            oneWin.insert(row);
        }
        if (row.size() == 2) {
            twoWin.insert(row);
        }
    }
    for (int i = 0; i < 3; i++) {
        set<char> col;
        for (string s : gameBoard) {
            col.insert(s.at(i));
        }
        if (col.size() == 1) {
            oneWin.insert(col);
        }
        if (col.size() == 2) {
            twoWin.insert(col);
        }
    }
    set<char> diag1;
    set<char> diag2;
    diag1.insert(gameBoard[0].at(0));
    diag1.insert(gameBoard[1].at(1));
    diag1.insert(gameBoard[2].at(2));
    diag2.insert(gameBoard[0].at(2));
    diag2.insert(gameBoard[1].at(1));
    diag2.insert(gameBoard[2].at(0));
    if (diag1.size() == 1) {
        oneWin.insert(diag1);
    }
    if (diag1.size() == 2) {
        twoWin.insert(diag1);
    }
    if (diag2.size() == 1) {
        oneWin.insert(diag2);
    }
    if (diag2.size() == 2) {
        twoWin.insert(diag2);
    }
    cout << oneWin.size() << "\n" << twoWin.size() << "\n";
}
