#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
int pos = 0;

void push(int x) {
    pos++;
    arr[pos] = x;
}

void pop() {
    if (pos == 0) {
        cout << -1 << '\n';
    }
    else {
        cout << arr[pos] << '\n';
        pos--;
    }
}

void size() {
    cout << pos << '\n';
}

void empty() {
    if (pos == 0) {
        cout << 1 << '\n';
    }
    else {
        cout << 0 << '\n';
    }
}

void top() {
    if (pos == 0) {
        cout << -1 << '\n';
    }
    else {
        cout << arr[pos] << '\n';
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string op;
        int x;
        cin >> op;
        if (op == "push") {
            cin >> x;
            push(x);
        }
        else if (op == "pop") {
            pop();
        }
        else if (op == "size") {
            size();
        }
        else if (op == "empty") {
            empty();
        }
        else if (op == "top") {
            top();
        }
    }
}