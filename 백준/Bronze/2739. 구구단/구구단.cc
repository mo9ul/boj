#include <iostream>
using namespace std;

int main()
{
    // 단수를 입력받는다
    int N;
    cin >> N;
    // 구구단을 출력한다
    for(int i = 1; i < 10; i++) {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}
