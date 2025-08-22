#include <bits/stdc++.h>
using namespace std;

int board[102][102];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans = 0;
    int x = 1;
    int y = 1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
            if (ans < board[i][j]) {
                ans = board[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << ans << '\n' << x+1 << " " << y+1;
}