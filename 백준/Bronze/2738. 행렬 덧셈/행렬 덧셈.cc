#include <bits/stdc++.h>
using namespace std;

int N, M;
int board1[102][102];
int board2[102][102];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board1[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board2[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (j == M - 1) {
                cout << board1[i][j] + board2[i][j] << '\n';
            }
            else {
                cout << board1[i][j] + board2[i][j] << " ";
            }
        }
    }
}