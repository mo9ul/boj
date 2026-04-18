#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m;
int board[1000][1000];
int dist[1000][1000][2];
bool vis[1000][1000][2];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs()
{
    queue<tuple<int, int, int>> q;
    q.push({0, 0, 0});
    vis[0][0][0] = true;
    dist[0][0][0] = 1;

    while (!q.empty())
    {
        auto [x, y, broken] = q.front();
        q.pop();

        if (x == n - 1 && y == m - 1)
            return dist[x][y][broken];

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (board[nx][ny] == 0 && !vis[nx][ny][broken])
            {
                vis[nx][ny][broken] = true;
                dist[nx][ny][broken] = dist[x][y][broken] + 1;
                q.push({nx, ny, broken});
            }

            if (board[nx][ny] == 1 && broken == 0 && !vis[nx][ny][1])
            {
                vis[nx][ny][1] = true;
                dist[nx][ny][1] = dist[x][y][broken] + 1;
                q.push({nx, ny, 1});
            }
        }
    }

    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = s[j] - '0';
        }
    }

    cout << bfs();
    return 0;
}
