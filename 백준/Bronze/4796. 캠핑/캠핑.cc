#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int L, P, V;
    int cnt = 0;
    while (1) {
        cin >> L >> P >> V; // 사용가능, 연속며칠, 전체며칠
        if (L == 0 && P == 0 && V == 0) {
            return 0;
        }
        int day = (V / P) * L + min(V % P, L);
        cnt++;
        cout << "Case " << cnt << ": " << day << '\n';
    }
}
