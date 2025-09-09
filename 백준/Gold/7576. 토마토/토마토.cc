#include <iterator>
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[1002][1002]; // 토마토 위치를 기록할 보드
int dis[1002][1002]; // 날짜를 기록할 보드
int dx[4] = {-1, 0, 1, 0}; // 상, 좌, 하, 우
int dy[4] = {0, -1, 0, 1};
int M, N; // 행, 열

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
            if (board[i][j] == -1) {
                dis[i][j] = 0;
            }
            else {
                dis[i][j] = -1;
            }
        }
    }
    queue<pair<int, int>> q;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 1) { // 익은 토마토 발견
                q.push({i, j});
                dis[i][j] = 0;
            }
        }
    }
    // BFS
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
                continue;
            }
            if (board[nx][ny] == 1 || board[nx][ny] == -1 || dis[nx][ny] != -1) {
                continue;
            }
            else {
                q.push({nx, ny});
                dis[nx][ny] = dis[cur.X][cur.Y] + 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (dis[i][j] == -1) {
                cout << -1;
                return 0;
            }
            else {
                ans = dis[i][j] > ans ? dis[i][j] : ans;
            }
        }
    }
    cout << ans;
}
