#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int board[102][102];
int dis[102][102];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    pair<int, int> des = {n - 1, m - 1};
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            board[i][j] = s[j] - '0';
            dis[i][j] = -1;
        }
    }
    queue<pair<int, int>> q;
    q.push({0,0});
    dis[0][0] = 1;
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }
            if (board[nx][ny] != 1 || dis[nx][ny] != -1) {
                continue;
            }
            dis[nx][ny] = dis[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }
    cout << dis[des.X][des.Y];
}