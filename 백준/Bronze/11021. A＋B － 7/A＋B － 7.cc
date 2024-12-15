#include <iostream>
using namespace std;

int main() {
    // 테스트 케이스를 입력받는다
    double T;
    cin >> T;
    // A+B를 출력한다
    int A, B;
    for(int i = 0; i < T; ++i) {
        cin >> A >> B;
        cout << "Case #" << i+1 << ": " << A + B << endl;
    }

    return 0;
}