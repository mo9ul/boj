#include <bits/stdc++.h>
using namespace std;

int dist[1000002];
int F, S, G, U, D;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> F >> S >> G >> U >> D;
    fill(dist + 1, dist + F + 1, -1);
    queue<int> q;
    q.push(S);
    dist[S] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto nxt: {cur + U, cur - D}) { // 이래야 다음 방문을 동시에 체크 가능
            if (nxt > F || nxt <= 0 || dist[nxt] != -1) {
                continue;
            }
            else {
                dist[nxt] = dist[cur] + 1;
                q.push(nxt);
            }
        }
    }
    if (dist[G] != -1) {
        cout << dist[G];
    }
    else {
        cout << "use the stairs";
    }
}