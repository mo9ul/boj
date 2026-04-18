#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++) {
        int s, e;
        cin >> s >> e;
        v[i] = {e, s};
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    int last_end = 0;

    for (int i = 0; i < N; i++) {
        if (v[i].second >= last_end) {
            cnt++;
            last_end = v[i].first;
        }
    }

    cout << cnt << '\n';
    return 0;
}
