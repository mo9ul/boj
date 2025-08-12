// 비번을 찾는 프로그램

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    map<string, string> m;
    for (int i = 0; i < N; i++) {
        string adrs, pw;
        cin >> adrs >> pw;
        m[adrs] = pw;
    }
    for (int i = 0; i < M; i++) {
        string adrs;
        cin >> adrs;
        cout << m[adrs] << '\n';
    }
}