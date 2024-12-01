#include <iostream>
using namespace std;

int main() {
    // N을 입력받는다
    int N;
    cin >> N;
    // N/4 만큼의 long을 출력하고 마지막에는 int를 붙여 출력한다
    for(int i = 0; i < N/4; ++i) {
        cout << "long ";
    }
    cout << "int";

    return 0;
}