#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
char board[102][102];
char board2[102][102];
int dis1[102][102];
int dis2[102][102];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'R' || board[i][j] == 'G') {
                board2[i][j] = 'R';
            }
            else {
                board2[i][j] = board[i][j];
            }
        }
    }
    // 적록색약 아닌 사람 BFS
    int ans1 = 0;
    queue<pair<int, int> > q1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dis1[i][j] == 0) {
                q1.push({i, j});
                dis1[i][j] = 1;
                ans1++;
            }
            while (!q1.empty()) {
                auto cur = q1.front();
                q1.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
                        continue;
                    }
                    if (dis1[nx][ny] != 0 || board[nx][ny] != board[cur.X][cur.Y]) {
                        continue;
                    }
                    else {
                        q1.push({nx, ny});
                        dis1[nx][ny] = dis1[cur.X][cur.Y] + 1;
                    }
                }
            }
        }
    }
    // 적록색약인 사람 BFS
    int ans2 = 0;
    queue<pair<int, int> > q2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dis2[i][j] == 0) {
                q2.push({i, j});
                dis2[i][j] = 1;
                ans2++;
            }
            while (!q2.empty()) {
                auto cur = q2.front();
                q2.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
                        continue;
                    }
                    if (dis2[nx][ny] != 0 || board2[nx][ny] != board2[cur.X][cur.Y]) {
                        continue;
                    }
                    else {
                        q2.push({nx, ny});
                        dis2[nx][ny] = dis2[cur.X][cur.Y] + 1;
                    }
                }
            }
        }
    }
    cout << ans1 << " " << ans2;
}
