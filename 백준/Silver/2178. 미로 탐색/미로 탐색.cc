#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define x first
#define y second

// 상,하,좌,우
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int dis[102][102]; // 거리를 저장
int board[102][102];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    string num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        for (int j = 0; j < m; j++)
        {
            if (num[j] == '1')
            {
                board[i][j] = 1;
            }
        }
    }

    // BFS 시작
    queue<pair<int, int>> q;
    q.push({0, 0});
    dis[0][0] = 1;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if (board[nx][ny] != 1 || dis[nx][ny] != 0)
            {
                continue;
            }
            else
            {
                q.push({nx, ny});
                dis[nx][ny] = dis[cur.x][cur.y] + 1;
            }
        }
    }

    cout << dis[n - 1][m - 1];
}