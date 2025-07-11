#include <bits/stdc++.h>
using namespace std;

int room_b[6];
int room_g[6];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K, s, y;
    cin >> N >> K; // 학생 N명, 한 방에 K명
    for (int i = 0; i < N; i++) {
        cin >> s >> y;
        if (s == 0) {
            room_g[y-1]++; // 0부터 시작하므로
        }
        else {
            room_b[y-1]++;
        }
    } // 이러면 여자 남자 방 배열은 각각 완성됨
    int cnt = 0;
    for (int g : room_g) {
        if (g == 0) {
            continue;
        }
        else if (g % K == 0) {
            cnt += g / K;
        }
        else {
            cnt += g / K + 1;
        }
    }
    for (int b : room_b) {
        if (b == 0) {
            continue;
        }
        else if (b % K == 0) {
            cnt += b / K;
        }
        else {
            cnt += b / K + 1;
        }
    }

    cout << cnt;
}