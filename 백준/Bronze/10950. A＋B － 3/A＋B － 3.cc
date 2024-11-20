#include <iostream>
using namespace std;

int main()
{
    // 테스트 케이스를 입력받는다
    int T;
    cin >> T;
    // T개의 A,B 쌍을 입력받는다
    int A,B;
    for(int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << endl;
    }

    return 0;
}
