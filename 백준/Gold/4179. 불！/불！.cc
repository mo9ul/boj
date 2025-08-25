#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[1002][1002];
int dis1[1002][1002]; // 불
int dis2[1002][1002]; // 지훈
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int R, C;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        fill(dis1[i], dis1[i]+C, -1);
        fill(dis2[i], dis2[i]+C, -1);
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
        }
    }

    queue<pair<int, int>> q1;
    queue<pair<int, int>> q2;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == 'F') {
                q1.push({i, j});
                dis1[i][j] = 0;
            }
            if (board[i][j] == 'J') {
                q2.push({i, j});
                dis2[i][j] = 0;
            }
        }
    }

    while (!q1.empty()) {
        pair<int, int> cur = q1.front();
        q1.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
                continue;
            }
            if (board[nx][ny] == '#' || dis1[nx][ny] >= 0) {
                continue;
            }
            else {
                q1.push({nx, ny});
                dis1[nx][ny] = dis1[cur.X][cur.Y] + 1;
            }
        }
    }

    while (!q2.empty()) {
        pair<int, int> cur = q2.front();
        q2.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
                cout << dis2[cur.X][cur.Y] + 1;
                return 0;
            }
            if (board[nx][ny] == '#' || dis2[nx][ny] >= 0) {
                continue;
            }
            if (dis1[nx][ny] != -1 && dis1[nx][ny] <= dis2[cur.X][cur.Y] + 1) {
                continue;
            }
            else {
                q2.push({nx, ny});
                dis2[nx][ny] = dis2[cur.X][cur.Y] + 1;
            }
        }
    }
    cout << "IMPOSSIBLE";
}