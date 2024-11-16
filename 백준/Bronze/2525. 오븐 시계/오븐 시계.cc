#include <iostream>
using namespace std;

int main()
{
    // 현재 시각을 입력받는다
    int H, M;
    cin >> H >> M;
    // 요리하는데 필요한 시간을 입력받는다
    int M_cook;
    cin >> M_cook;
    // 완료 시각을 출력한다
    H = H + (M + M_cook) / 60;
    M = (M + M_cook) % 60;
    // 위의 출력에서 시가 24초과일 경우
    if (H > 24) cout << H - 24 << " " << M;
    // 위의 출력에서 시가 24인 경우
    else if (H == 24) cout << 0 << " " << M;
    // 위의 출력에서 시가 24미만일 경우
    else cout << H << " " << M;

    return 0;
}
