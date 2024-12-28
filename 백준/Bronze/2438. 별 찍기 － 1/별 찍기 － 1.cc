#include <iostream>
using namespace std;

int main() {
    // 몇 번째 줄까지 출력할지 입력
    int N;
    cin >> N;
    // 별 출력
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < i+1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}