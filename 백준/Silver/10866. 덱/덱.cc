#include <bits/stdc++.h>
using namespace std;

int dat[20000+5];
int head = 10000;
int tail = 10000;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N;
    string op;
    for (int i = 0; i < N; i++) {
        cin >> op;
        if (op == "push_front") {
            cin >> M;
                dat[--head] = M;
        }
        else if (op == "push_back") {
            cin >> M;
                dat[tail++] = M;
        }
        else if (op == "pop_front") {
            if (head != tail) {
                cout << dat[head++] << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (op == "pop_back") {
            if (head != tail) {
                cout << dat[--tail] << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (op == "size") {
            cout << tail - head << '\n';
        }
        else if (op == "empty") {
            if (head == tail) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (op == "front") {
            if (head != tail) {
                cout << dat[head] << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (op == "back") {
            if (head != tail) {
                cout << dat[tail - 1] << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
}