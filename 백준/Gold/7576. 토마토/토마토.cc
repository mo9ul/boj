#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second 

int board[1002][1002];
int dis[1002][1002];
int dx[4] = {-1, 0, 1, 0}; // 상, 좌, 하, 우
int dy[4] = {0, -1, 0, 1};
int M, N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N;  // M: 가로 (열), N: 세로 (행)

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
            dis[i][j] = -1;
        }
    }

    queue<pair<int, int>> Q;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 1) {
                Q.push({i, j});
                dis[i][j] = 0;
            }
        }
    }

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (board[nx][ny] == -1 || dis[nx][ny] != -1) continue;

            Q.push({nx, ny});
            dis[nx][ny] = dis[cur.X][cur.Y] + 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] != -1 && dis[i][j] == -1) {
                cout << -1;
                return 0;
            }
            ans = max(ans, dis[i][j]);
        }
    }
    cout << ans;
}
