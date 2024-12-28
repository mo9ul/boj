#include <iostream>
using namespace std;

int main() {
    // 몇 번째 줄까지 출력할지 입력
    int N;
    cin >> N;
    // 별 출력
    for(int i = 1; i <= N; ++i) {
        for(int k = N-i; k > 0; --k) {
            cout << " ";
        }
        for(int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}