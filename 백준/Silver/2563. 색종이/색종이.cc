#include <bits/stdc++.h>
using namespace std;

int board[102][102];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int n, m;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> n >> m;
        for (int j = n; j < 10 + n; j++) {
            for (int k = m; k < 10 + m; k++) {
                if (board[j][k] == 1) {
                    continue;
                }
                board[j][k] = 1;
                cnt++;
            }
        }
    }
    cout << cnt;
}