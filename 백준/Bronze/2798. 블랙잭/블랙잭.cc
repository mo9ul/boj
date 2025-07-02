// M - 입력 중 가장 큰 수 & 입력 중 가장 큰 수를 Sum에 추가
// if(만약 가장 큰 수 > M) => M - 그 다음, 그래도 크면 또 그 다음)
// (M - 입력 중 가장 큰 수) - 그 다음 큰 수 > 0 이면 그 수를 Sum에 추가
// 근데 이러고 남은 수에 들어갈 카드가 없으면..? -> 이건 일단 나중에 생각해보자.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int cards[N];
    for(int i = 0; i < N; i++) { // 숫자 저장 완료
        cin >> cards[i];
    }

    int sum = 0;
    int max = 0;
    for(int i = 0; i < N - 2; i++) {
        for(int j = i + 1; j < N - 1; j++) {
            for(int k = j + 1; k < N; k++) {
                sum = cards[i] + cards[j] + cards[k];
                if (max < sum && sum <= M) {
                    max = sum;
                }
            }
        }
    }

    cout << max;

    return 0;
}