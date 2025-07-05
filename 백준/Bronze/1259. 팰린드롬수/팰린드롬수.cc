#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1) {
        int num;
        cin >> num;
        if(num == 0) {
            break;
        }
        // 입력된 수가 팰린드롬수라면 yes를, 아니라면 no를 반환하는 코드
        string s = to_string(num);
        string reverse_s = s;
        reverse(reverse_s.begin(), reverse_s.end());
        if(s == reverse_s) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }

    }

    return 0;
}