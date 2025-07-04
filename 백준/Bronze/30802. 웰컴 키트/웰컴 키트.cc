#include <bits/stdc++.h>
using namespace std;

int main() {
    // 참가자 수 입력
    int N;
    cin >> N;
    // 참가자 사이즈 저장
    int size[6];
    for(int i = 0; i < 6; i++) {
        cin >> size[i];
    }
    // 티셔츠 묶음 수 T, 펜 묶음 수 P 입력
    int T, P;
    cin >> T >> P;
    // 목적)
    // 첫 줄에 티셔츠 최소 몇 묶음 주문해야하는지 출력
    // 둘째 줄에 펜 최대 몇 묶음 주문할 수 있는지, 한자루짜리 몇개 사야되는지 출력
    // 나의 발상)
    // 첫째 줄 출력: size의 각 요소를 T로 나눠서나온 몫 + 1을 전부 합 -> 카운트 증가시키자
    // 주의! 나눠떨어지는 경우는 몫 값 그대로.
    // 둘째 줄 출력: N을 P로 나눈 몫, 나머지 출력
    int count = 0;
    for(int j = 0; j < 6; j++) {
        if(size[j] % T == 0) {
            count += size[j] / T;
        }
        else {
            count += size[j] / T + 1;
        }
    }
    cout << count << "\n";
    cout << N/P << " " << N%P;

    return 0;
}