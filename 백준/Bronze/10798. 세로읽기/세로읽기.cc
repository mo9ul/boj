#include <bits/stdc++.h>
using namespace std;

char board[17][17];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 17; j++) {
            board[i][j] = '*';
        }
    }
    for (int i = 0; i < 5; i++) {
        string s;
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            board[i][j] = s[j];
        }
    }
    for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 17; j++) {
            if (board[j][i] == '*') {
                continue;
            }
            else {
                cout << board[j][i];
            }
        }
    }
}
