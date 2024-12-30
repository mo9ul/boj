#include <iostream>
using namespace std;

int main() {
    // 0 0 이 입력될 때까지 계속 입력을 받아야 함
    while(true) {
        int A, B;
        cin >> A >> B;
        // 0 0 입력시 무한루프문 탈출하고 프로그램 종료
        if(A==0 && B==0) {
            break;
        }
        cout << A + B << endl;
    }
    return 0;
}