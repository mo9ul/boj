#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    stack<int> s;
    long long ans = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int h;
        cin >> h;

        if (s.empty()) {
            s.push(h);
            continue;
        }

        while (!s.empty() && s.top() <= h) {
            s.pop();
        }
        ans += s.size();

        s.push(h);
    }

    cout << ans;
}