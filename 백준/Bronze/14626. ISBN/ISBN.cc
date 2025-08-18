// 배열을 만들어서 기록
// 별은 -1로 기록?
// -1의 인덱스를 알아내서 3을 곱할지, 그대로 나갈지 결정
// for문으로 0부터9사이의 숫자중에 찾아내기

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string isbn;
    cin >> isbn;

    int arr[10000];
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        if (isbn[i] != '*') {
            if (i % 2 != 0) {
                arr[i] = 3*(isbn[i] - '0');
                sum += arr[i];
            }
            else {
                arr[i] = isbn[i] - '0';
                sum += arr[i];
            }
        }
        else {
            arr[i] = -1;
        }
    }
    int star;
    for (int i = 0; i < 12; i++) {
        if (arr[i] == -1 && i % 2 != 0) {
            star = 3;
        }
        else if (arr[i] == -1 && i % 2 == 0) {
            star = 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        if ((sum + (isbn[12] - '0') + i*star) % 10 == 0) {
            cout << i;
        }
    }
}