#include <bits/stdc++.h>
using namespace std;

// 사용자가 누른 명령을 모두 기록
// 알파벳 대/소문자, 숫자, 백스페이스, 화살표

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, L;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string word;
        cin >> word; // 테스트 케이스 입력
        list<char> l;
        auto p = l.begin();
        for (char c: word) {
            if (c == '-') {
                if (p != l.begin()) {
                    p--;
                    p = l.erase(p);
                }
            }
            else if (c == '<') {
                if (p != l.begin()) {
                    p--;
                }
            }
            else if (c == '>') {
                if (p != l.end()) {
                    p++;
                }
            }
            else {
                l.insert(p, c); // 커서가 가리키는 곳에 c를 넣어라
            }
        }

        for (char c: l) {
            cout << c;
        }
        cout << '\n';
    }
}