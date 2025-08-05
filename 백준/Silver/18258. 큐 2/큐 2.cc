#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;
    string op;
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> op;
        if (op == "push") {
            cin >> M;
            q.push(M);
        }
        else if (op == "pop") {
            if (q.size() != 0) {
                cout << q.front() << '\n';
                q.pop();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (op == "size") {
            cout << q.size() << '\n';
        }
        else if (op == "empty") {
            if (q.size() == 0) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (op == "front") {
            if (q.size() != 0) {
                cout << q.front() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (op == "back") {
            if (q.size() != 0) {
                cout << q.back() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
}