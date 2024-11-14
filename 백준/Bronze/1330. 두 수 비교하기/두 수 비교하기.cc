#include <iostream>
using namespace std;

int main()
{
    // 정수 A,B를 입력받는다
    int A, B;
    cin >> A >> B;
    // A,B를 비교한 결과를 출력한다
    if (A > B) cout << ">";
    else if (A < B) cout << "<";
    else cout << "==";

    return 0;
}
