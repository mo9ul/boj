#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N;
    string op;
    vector<int> v;
    int head = 0;
    int tail = 0;
    for (int i = 0; i < N; i++) {
        cin >> op;
        if (op == "push") {
            cin >> M;
            v.push_back(M);
            tail++;
        }
        else if (op == "pop") {
            if (head == tail) {
                cout << -1 << '\n';
            }
            else {
                cout << v[head] << '\n';
                head++;
            }
        }
        else if (op == "size") {
            cout << tail - head << '\n';
        }
        else if (op == "empty") {
            if (tail - head == 0) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (op == "front") {
            if (tail - head != 0) {
                cout << v[head] << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (op == "back") {
            if (tail - head != 0) {
                cout << v[tail-1] << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
}