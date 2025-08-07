#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<int> dq;
    int idx = 0;
    int res = 0;
    int N, M, x;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }
    while (M--) {
        cin >> x;

        for (int i = 0; i < dq.size(); i++) {
            if (x == dq[i]) {
                idx = i;
                break;
            }
        } // 뽑아내고자 하는 수가 덱의 몇번째 위치에 있는지를 알아내는 코드

        if (idx <= dq.size() / 2) { // 만약 그 위치가 현재 덱 사이즈의 절반보다 작으면 앞에서 부터 없애면서 카운트 하는게 효율적
            while (true) {
                if (x == dq.front()) {
                    dq.pop_front();
                    break;
                }
                else {
                    ++res;
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
            }
        }
        else {
            while (true) {
                if (x == dq.front()) {
                    dq.pop_front();
                    break;
                }
                else {
                    ++res;
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
            }
        }
    }
    cout << res;
}