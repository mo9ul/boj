#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[302][302];
bool vis[302][302];
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2}; // 대각선 우측 상단부터 시계방향
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int T, M;
pair<int, int> start;
pair<int, int> des;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    queue<pair<int, int>> q;
    for (int i = 0; i < T; i++) {
        cin >> M;
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                board[j][k] = 0;
                vis[j][k] = 0;
            }
        }
        cin >> start.X >> start.Y;
        cin >> des.X >> des.Y;
        q.push({start.X, start.Y});
        vis[start.X][start.Y] = 1;
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            for (int dir = 0; dir < 8; dir++) { // 이미 방문했거나, 보드를 넘어가면 패스
                pair<int, int> next = {cur.X + dx[dir], cur.Y + dy[dir]};
                if (next.X < 0 || next.X >= M || next.Y < 0 || next.Y >= M) {
                    continue;
                }
                if (board[next.X][next.Y] != 0 || vis[next.X][next.Y] == 1) {
                    continue;
                }
                else {
                    q.push({next.X, next.Y});
                    board[next.X][next.Y] = board[cur.X][cur.Y] + 1;
                    vis[next.X][next.Y] = 1;
                }
            }
        }
        cout << board[des.X][des.Y] << '\n';
    }
}
