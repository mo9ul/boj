#include <bits/stdc++.h>
using namespace std;

int space[100001];
int dist[100001];
int N, K;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K; // 수빈, 동생 위치 입력
    if (N == K) {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < 100001; i++) {
        dist[i] = -1;
    }
    queue<int> q;
    q.push(N);
    dist[N] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < 3; i++) {
            int nx;
            if (i == 0) {
                nx = cur + 1;
            }
            else if (i == 1) {
                nx = cur - 1;
            }
            else {
                nx = cur * 2;
            }
            if (nx < 0 || nx >= 100001) {
                continue;
            }
            if (dist[nx] != -1) {
                continue;
            }
            if (nx == K) {
                cout << dist[cur] + 1;
                return 0;
            }
            else {
                dist[nx] = dist[cur] + 1;
                q.push(nx);
            }
        }
    }
}