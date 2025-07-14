#include <bits/stdc++.h>
using namespace std;

struct coordinate {
    int x;
    int y;
};

bool comp(const coordinate& a, const coordinate& b) {
    if (a.x == b.x) {
        return a.y < b.y;
    }
    return a.x < b.x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<coordinate> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].x >> v[i].y;
    } // 좌표는 전부 저장함
    sort(v.begin(), v.end(), comp);
    for (auto a: v) {
        cout << a.x << " " << a.y << '\n';
    }
}