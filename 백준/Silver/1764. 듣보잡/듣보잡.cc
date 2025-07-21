#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string, int> m;
    vector<string> v;
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N+M; i++) {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] > 1) {
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (auto a: v) {
        cout << a << '\n';
    }
}