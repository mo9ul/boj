#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> v1, v2;
    for (int i = 1; i <= N; i++) {
        v1.push_back(i);
    }
    int cnt = 0;
    auto p = v1.begin();
    while (!v1.empty()) {
        cnt++;
        if (cnt == K) {
            v2.push_back(*p);
            p = v1.erase(p);
            cnt = 0;
        }
        else {
            p++;
        }

        if (p == v1.end() && !v1.empty()) {
            p = v1.begin();
        }
    }
    cout << '<';
    for (int i = 0; i < N; i++) {
        cout << v2[i];
        if (i != N - 1) {
            cout << ", ";
        }
    }
    cout << '>';
}

// 1234567 -> 3, 3
// 124567 -> 6, 36
// 12457 -> 2, 362
// 1457 -> 7, 3627
// 145 -> 5, 36275
// 14 -> 1, 362751
// 4 -> 4, 3627514