#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

#define X first
#define Y second

int M, N, K;
bool vis[102][102];
int dx[4] = {-1, 1, 0, 0}; // 상, 하, 좌, 우
int dy[4] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N >> K;

    // 직사각형 입력받아 영역 표시
    for (int i = 0; i < K; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int r = y1; r < y2; r++) {
            for (int c = x1; c < x2; c++) {
                vis[r][c] = 1;
            }
        }
    }

    vector<int> area_sizes;
    int area_cnt = 0;
    queue<pair<int,int>> q;

    for (int r = 0; r < M; r++) {
        for (int c = 0; c < N; c++) {
            if (!vis[r][c]) {
                // BFS 시작
                q.push({r,c});
                vis[r][c] = 1;
                int area_size = 1;

                while (!q.empty()) {
                    auto cur = q.front(); q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nr = cur.X + dx[dir];
                        int nc = cur.Y + dy[dir];
                        if (nr < 0 || nr >= M || nc < 0 || nc >= N) continue;
                        if (vis[nr][nc]) continue;
                        vis[nr][nc] = 1;
                        area_size++;
                        q.push({nr,nc});
                    }
                }

                area_cnt++;
                area_sizes.push_back(area_size);
            }
        }
    }

    sort(area_sizes.begin(), area_sizes.end());

    cout << area_cnt << '\n';
    for (int sz : area_sizes) cout << sz << " ";
}