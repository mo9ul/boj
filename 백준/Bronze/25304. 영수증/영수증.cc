#include <iostream>
using namespace std;

int main()
{
    // 영수증에 적힌 총 금액 x를 입력받는다
    int x;
    cin >> x;
    // 영수증에 적힌 구매한 물건의 종류의 수 n을 입력받는다
    int n;
    cin >> n;
    // 반복문을 활용하여 n개의 줄을 출력한다
    int x_2 = 0;
    for(int i = 0; i < n; i++) {
        // 각 줄에는 물건의 가격 a, 개수 b가 공백을 두고 주어진다
        int a, b;
        cin >> a >> b;
        // 구매한 물건의 가격과 개수로 계산한 총 금액을 x_2에 복사한다
        x_2 += a * b;
    }
    // x와 x_2가 일치하면 Yes를 출력, 그렇지 않으면 No를 출력한다
    if(x == x_2) cout << "Yes";
    else cout << "No";

    return 0;
}
