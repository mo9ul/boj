#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second
int board[26][26];
bool vis[26][26];
int N;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++) {
            board[i][j] = s[j] - '0';
        }
    }
    queue<pair<int, int>> q;
    vector<int> v; // 단지별로 몇 채 있는지 저장할 벡터
    int aptcnt = 0; // 단지수 카운트
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1 && vis[i][j] == 0) {
                q.push({i, j});
                vis[i][j] = 1;
                int cnt = 0; // 단지별로 집 수를 세어야 함
                while (!q.empty()) {
                    cnt++;
                    auto cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
                            continue;
                        }
                        if (vis[nx][ny] == 1 || board[nx][ny] == 0) { // 이미 방문했거나, 집이 없거나
                            continue;
                        }
                        else {
                            q.push({nx, ny});
                            vis[nx][ny] = 1;
                        }
                    }
                }
                aptcnt++;
                v.push_back(cnt);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << aptcnt << '\n';
    for (int i: v) {
        cout << i << '\n';
    }
}