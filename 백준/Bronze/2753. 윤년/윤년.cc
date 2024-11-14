#include <iostream>
using namespace std;

int main()
{
    // 연도를 입력받는다
    int year;
    cin >> year;
    // 윤년인지 아닌지 판단한다
    if(year % 4 == 0 and year % 100 != 0 || year % 400 ==0)
    // 윤년이면 1을 아니면 0을 출력한다
        cout << 1;
    else
        cout << 0;

    return 0;
}
