#include <bits/stdc++.h>
using namespace std;

#define X first;
#define Y second;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<pair<int,int>> v(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < N; i++) {
        cout << v[i].first << " " << v[i].second << '\n';
    }
}