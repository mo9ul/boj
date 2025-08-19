#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int i = 0;
    for (int sum = 2; sum <= N; i++) {
        sum += 6*i;
    }
    if (N == 1) {
        i = 1;
    }
    cout << i;
}

// 2~7 -> 1번 (6)
// 8~19 -> 2번 (12)
// 20~37 -> 3번 (18)
// 38~61 -> 4번 (24)
// => 칸의 개수는 공차가 6인 등차수열로 증가함