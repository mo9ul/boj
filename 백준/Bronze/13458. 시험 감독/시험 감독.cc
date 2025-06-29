#include <bits/stdc++.h>
using namespace std;

// 조건1. 각 시험장에 총감독(B)는 1명, 부감독(C)는 여러명
// 조건2. 모든 응시생을 감시해야 함
// 조건3. 총감독 1명은 무조건 들어가야 함 (테스트 출력을 보니 그러함)

// 풀이 상상
// 각 강의실의 응시자수 A를 총감독 감시인원 B와 비교
// 만약 A - B == 0 이면, 해당 강의실은 해결
// A - B != 0 이면, 남은 수 (A - B)를 C로 나눈 몫만큼 감독관 추가
// (A - B) % C != 0 이면, (A - B) / C + 1


int main() {
    // 강의실 개수를 입력받는다
    int N;
    cin >> N;
    // 응시자 수를 입력받는다
    int stud_arr[N];
    for(int i = 0; i < N; i++) {
        int stud;
        cin >> stud;
        stud_arr[i] = stud;
    }
    // 총감독, 부감독 감시가능인원을 입력받는다
    int B, C;
    cin >> B >> C;
    // N개의 강의실 각각에 필요한 최소 감독 수를 구해서 더한 총합을 구한다
    long long proctor = 0;
    for(int j = 0; j < N; j++) {
        if(stud_arr[j] - B <= 0) {
            proctor++;
        }
        else if(stud_arr[j] - B != 0 && (stud_arr[j] - B) % C == 0) {
            proctor++;
            proctor += (stud_arr[j] - B) / C;
        }
        else {
            proctor++;
            proctor += ((stud_arr[j] - B) / C) + 1;
        }
    }
    cout << proctor;

    return 0;
}