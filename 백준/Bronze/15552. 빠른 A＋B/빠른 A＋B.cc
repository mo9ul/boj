#include <iostream>
using namespace std;

int main() {
    // 입출력을 빠르게 만든다
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    // 테스트 케이스를 입력받는다
    double T;
    cin >> T;
    // A+B를 T번 출력한다
    int A, B;
    for(int i = 0; i < T; ++i) {
        cin >> A >> B;
        cout << A + B << "\n";
    }

    return 0;
}