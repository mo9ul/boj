#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        if (s == ".") {
            break;
        }
        stack<char> s2;
        bool isValid = true;
        for (char c : s) {
            if (c == '(' || c == '[') {
                s2.push(c);
            }
            else if (c == ')') {
                if (s2.empty() || s2.top() != '(') {
                    isValid = false;
                    break;
                }
                s2.pop();
            }
            else if (c == ']') {
                if (s2.empty() || s2.top() != '[') {
                    isValid = false;
                    break;
                }
                s2.pop();
            }
        }
        if (!s2.empty()) {
            isValid = false;
        }
        cout << (isValid ? "yes" : "no") << '\n';
    }
}
