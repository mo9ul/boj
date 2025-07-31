#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string s;
        cin >> s;
        stack<char> s2;
        for (char c: s) {
            if (c == '(') {
                s2.push(c);
            }
            else { // c == ')'
                if (!s2.empty() && s2.top() == '(') { // 비어있지 않고, 탑이 (라면
                    s2.pop();
                }
                else { // 비어있다면 푸시
                    s2.push(c);
                }
            }
        }
        if (!s2.empty()) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
}