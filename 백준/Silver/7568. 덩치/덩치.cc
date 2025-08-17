#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    deque<pair<int, int>> d;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        d.push_back({x,y});
    }
    int ans[N];
    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            if (d.front().first < d[j].first && d.front().second < d[j].second) {
                cnt++;
            }
            else {
                continue;
            }
        }
        ans[i] = cnt + 1;
        d.push_back(d.front());
        d.pop_front();
    }

    for (int i: ans) {
        cout << i << ' ';
    }
}