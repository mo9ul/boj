#include <bits/stdc++.h>
using namespace std;

int main() {
    // 맨 위를 버리고, 남은 것 중 맨 위를 맨 아래로
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        q.pop();               // 1장 버림
        q.push(q.front());     // 다음 걸 맨 뒤로
        q.pop();               // 맨 앞 제거해서 1장만 남김
    }
    cout << q.front();
}