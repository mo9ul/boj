#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second

bool vis[502][502];
int board[502][502];

// 순서대로 우,하,좌,상
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int height, width;
    cin >> height >> width;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cin >> board[i][j];
        }
    }

    int paint_cnt = 0;
    int paint_max = 0;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (board[i][j] == 0 || vis[i][j])
            {
                continue;
            }

            else
            {
                paint_cnt++;

                queue<pair<int, int>> q;
                vis[i][j] = 1;
                q.push({i, j});
                int area = 0;
                while (!q.empty())
                {
                    area++;
                    pair<int, int> cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= height || ny < 0 || ny >= width)
                        {
                            continue;
                        }
                        if (board[nx][ny] == 0 || vis[nx][ny])
                        {
                            continue;
                        }
                        else
                        {
                            vis[nx][ny] = 1;
                            q.push({nx, ny});
                        }
                    }
                    paint_max = max(paint_max, area);
                }
            }
        }
    }

    cout << paint_cnt << '\n';
    cout << paint_max;
}