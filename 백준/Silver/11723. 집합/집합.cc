#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string op;
    int M, N;
    cin >> M;
    int arr[21] = {0};
    for (int i = 0; i < M; i++) {
        cin >> op;
        if (op == "add") {
            cin >> N;
            if (arr[N] == 0) {
                arr[N] = 1;
            }
            else {
                continue;
            }
        }
        else if (op == "remove") {
            cin >> N;
            if (arr[N] == 1) {
                arr[N] = 0;
            }
            else {
                continue;
            }
        }
        else if (op == "check") {
            cin >> N;
            if (arr[N] == 1) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (op == "toggle") {
            cin >> N;
            if (arr[N] == 1) {
                arr[N] = 0;
            }
            else {
                arr[N] = 1;
            }
        }
        else if (op == "all") {
            for (int j = 1; j < 21; j++) {
                arr[j] = 1;
            }
        }
        else if (op == "empty") {
            for (int j = 1; j < 21; j++) {
                arr[j] = 0;
            }
        }
    }
}