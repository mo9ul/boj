#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int num = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] != 1 || vis[i][j]) {
                continue;
            }
            else {
                num++;
                queue<pair<int, int>> q;
                vis[i][j] = 1;
                q.push({i,j});
                int area = 0;
                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    area++;
                    for (int dis = 0; dis < 4; dis++) {
                        int nx = cur.X + dx[dis];
                        int ny = cur.Y + dy[dis];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                            continue;
                        }
                        if (board[nx][ny] != 1 || vis[nx][ny]) {
                            continue;
                        }
                        else {
                            vis[nx][ny] = 1;
                            q.push({nx, ny});
                        }
                    }
                }
                if (max <= area) {
                    max = area;
                }
            }
        }
    }
    cout << num << '\n' << max;
}