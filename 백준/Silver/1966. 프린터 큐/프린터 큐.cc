// 현재 Queue의 가장 앞에 있는 문서의 ‘중요도’를 확인한다.
// 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있다면,
// 이 문서를 인쇄하지 않고 Queue의 가장 뒤에 재배치 한다. 그렇지 않다면 바로 인쇄를 한다.
// 예를 들어 Queue에 4개의 문서(A B C D)가 있고, 중요도가 2 1 4 3 라면 C를 인쇄하고,
// 다음으로 D를 인쇄하고 A, B를 인쇄하게 된다.
// 여러분이 할 일은, 현재 Queue에 있는 문서의 수와 중요도가 주어졌을 때, 어떤 한 문서가 몇 번째로 인쇄되는지 알아내는 것이다.
// 예를 들어 위의 예에서 C문서는 1번째로, A문서는 3번째로 인쇄되게 된다.

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, N, M;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        queue<pair<int, int>> q; // pair<중요도, 인덱스>
        priority_queue<int> pq; // 중요도순 내림차순
        for (int j = 0; j < N; j++) {
            int n;
            cin >> n;
            q.push({n, j});
            pq.push(n);
        }
        int cnt = 0;
        while (true) {
            auto cur = q.front();
            q.pop();
            if (cur.X == pq.top()) {
                cnt++;
                pq.pop();
                if (cur.Y == M) {
                    cout << cnt << '\n';
                    break;
                }
            }
            else { // cur.X != pq.top() 즉 가장 높은 우선순위가 아닐때
                q.push(cur);
            }
        }
    }
}