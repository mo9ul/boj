#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        q.pop(); // 맨 위 카드 버리고
        if (q.size() >= 2) {
            q.push(q.front()); // 그 다음 제일 위에 있는 카드 제일 아래로
            q.pop(); // 보내고 삭제
        }
    }
    cout << q.front();
}