#include <iostream>
using namespace std;

int main()
{
    //n을 입력받는다
    int n;
    cin >> n;
    //반복문을 사용하여 1부터 n까지 더한 값을 구한다
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    //출력
    cout << sum;

    return 0;
}
