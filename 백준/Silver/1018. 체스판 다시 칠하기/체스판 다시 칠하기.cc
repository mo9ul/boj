#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m;
    int ans;
    int res = 64;
    char arr[50][50];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    char WB[8][8] = {
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W'
    };
    char BW[8][8] = {
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B'
    };
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int cnt_w = 0, cnt_b = 0;
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    if (arr[i + x][j + y] != BW[x][y]) {
                        cnt_b++;
                    }
                    if (arr[i + x][j + y] != WB[x][y]) {
                        cnt_w++;
                    }
                }
            }
            ans = min(cnt_b, cnt_w);
            if (ans <= res) {
                res = ans;
            }
        }
    }
    cout << res;
}