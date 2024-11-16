#include <iostream>
using namespace std;

int main()
{
    // x를 입력받는다
    int x;
    cin >> x;
    // y를 입력받는다
    int y;
    cin >> y;
    // 몇 사분면의 점인지 출력한다
    if(x > 0 & y > 0) cout << 1;
    else if (x > 0 & y < 0) cout << 4;
    else if (x < 0 & y > 0) cout << 2;
    else cout << 3;

    return 0;
}
