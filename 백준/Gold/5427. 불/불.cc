#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[1002][1002];
int dis1[1002][1002];
int dis2[1002][1002];
int dx[4] = {-1, 0, 1, 0}; // 상, 좌, 하, 우
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int w, h;
        cin >> w >> h;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> board[i][j];
                dis1[i][j] = -1;
                dis2[i][j] = -1;
            }
        }

        queue<pair<int,int>> q_fire;
        queue<pair<int,int>> q_sang;

        // 초기 위치 큐에 넣기 & 거리 초기화
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (board[i][j] == '*') {
                    q_fire.push({i,j});
                    dis1[i][j] = 0;
                }
                if (board[i][j] == '@') {
                    q_sang.push({i,j});
                    dis2[i][j] = 0;
                }
            }
        }

        // 불 BFS
        while (!q_fire.empty()) {
            auto cur = q_fire.front(); q_fire.pop();

            for (int dir = 0; dir < 4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if (board[nx][ny] == '#' || dis1[nx][ny] != -1) continue;

                dis1[nx][ny] = dis1[cur.X][cur.Y] + 1;
                q_fire.push({nx, ny});
            }
        }

        // 상근 BFS
        int answer = -1;
        while (!q_sang.empty()) {
            auto cur = q_sang.front(); q_sang.pop();

            for (int dir = 0; dir < 4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                // 맵 밖으로 나가면 탈출 성공
                if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
                    answer = dis2[cur.X][cur.Y] + 1;
                    break;
                }

                // 이동 가능 조건
                if (board[nx][ny] == '#' || dis2[nx][ny] != -1) continue;
                // 불이 도착하기 전에 도착해야 함 (불이 안 닿으면 dis1[nx][ny] == -1)
                if (dis1[nx][ny] != -1 && dis1[nx][ny] <= dis2[cur.X][cur.Y] + 1) continue;

                dis2[nx][ny] = dis2[cur.X][cur.Y] + 1;
                q_sang.push({nx, ny});
            }

            if (answer != -1) break; // 탈출 성공 시 바로 종료
        }

        if (answer == -1) cout << "IMPOSSIBLE" << '\n';
        else cout << answer << '\n';
    }
}
