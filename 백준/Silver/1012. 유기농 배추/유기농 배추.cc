#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int T, M, N, K;
int board[52][52];
bool vis[52][52];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> M >> N >> K;
        pair<int, int> p;
        for (int j = 0; j < K; j++) {
            cin >> p.X >> p.Y;
            board[p.X][p.Y] = 1;
        }
        int ans = 0;
        queue<pair<int, int>> q;
        for (int k = 0; k < M; k++) {
            for (int l = 0; l < N; l++) {
                if (board[k][l] == 1) {
                    ans++;
                    q.push({k, l});
                    vis[k][l] = 1;
                    while (!q.empty()) {
                        pair<int, int> cur = q.front();
                        q.pop();
                        for (int dir = 0; dir < 4; dir++) {
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if (nx < 0 || nx >= M || ny < 0 || ny >= N) {
                                continue;
                            }
                            if (board[nx][ny] != 1 || vis[nx][ny] == 1) {
                                continue;
                            }
                            else {
                                q.push({nx, ny});
                                vis[nx][ny] = 1;
                                board[nx][ny] = 0;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << '\n';
        for (int n = 0; n < 52; n++) {
            for (int m = 0; m < 52; m++) {
                vis[n][m] = 0;
                board[n][m] = 0;
            }
        }
    }
}