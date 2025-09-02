#include <bits/stdc++.h>
using namespace std;

int board[102][102][102];
int dis[102][102][102];
int dx[6] = {-1, 0, 1, 0, 0, 0}; // 좌우
int dy[6] = {0, -1, 0, 1, 0, 0}; // 상하
int dz[6] = {0, 0, 0, 0, 1, -1}; // 위아래

struct Coord {
    int x, y, z;
};

int M, N, H;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N >> H;

    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                cin >> board[z][y][x];
            }
        }
    }

    queue<Coord> q;
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (board[z][y][x] == 1) {
                    q.push({x, y, z});
                    dis[z][y][x] = 1;
                }
            }
        }
    }

    while (!q.empty()) {
        Coord cur = q.front();
        q.pop();
        for (int dir = 0; dir < 6; dir++) {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            int nz = cur.z + dz[dir];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H)
                continue;
            if (board[nz][ny][nx] == -1 || dis[nz][ny][nx] != 0)
                continue;

            dis[nz][ny][nx] = dis[cur.z][cur.y][cur.x] + 1;
            q.push({nx, ny, nz});
        }
    }

    int ans = 0;
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (board[z][y][x] == 0 && dis[z][y][x] == 0) {
                    cout << -1;
                    return 0;
                }
                ans = max(ans, dis[z][y][x]);
            }
        }
    }
    cout << ans - 1;
}
