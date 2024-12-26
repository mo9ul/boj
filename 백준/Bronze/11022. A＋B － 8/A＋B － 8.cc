#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    // 테스트 케이스 T와 정수 A,B 입력받는다
    int T, A, B;
    cin >> T;

    // A+B를 출력한다
    for(int i = 0; i < T; ++i) {
        cin >> A >> B;
        int C = A + B;
        cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << C << endl;
    }

    return 0;
}