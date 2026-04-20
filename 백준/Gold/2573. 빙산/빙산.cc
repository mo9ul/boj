#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
int a[301][301];
int melt[301][301];
bool vis[301][301];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int comp()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = false;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0 && !vis[i][j])
            {
                cnt++;
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;

                while (!q.empty())
                {
                    pair<int, int> cur = q.front();
                    q.pop();
                    int x = cur.first;
                    int y = cur.second;

                    for (int k = 0; k < 4; k++)
                    {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
                        {
                            if (a[nx][ny] > 0 && !vis[nx][ny])
                            {
                                vis[nx][ny] = true;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int year = 0;
    while (true)
    {
        int pieces = comp();
        if (pieces >= 2)
        {
            cout << year << '\n';
            return 0;
        }

        if (pieces == 0)
        {
            cout << 0 << '\n';
            return 0;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                melt[i][j] = 0;
                if (a[i][j] > 0)
                {
                    int seaCount = 0;
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 0)
                        {
                            seaCount++;
                        }
                    }
                    melt[i][j] = seaCount;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[i][j] = max(0, a[i][j] - melt[i][j]);
            }
        }

        year++;
    }

    return 0;
}