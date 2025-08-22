#include <bits/stdc++.h>
using namespace std;

bool prime(int i) {
    if (i < 2) {
        return false;
    }
    for (int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int M, N;
    cin >> M;
    cin >> N;
    vector<int> v;
    for (M; M <= N; M++) {
        if (prime(M)) {
            v.push_back(M);
        }
        else {
            continue;
        }
    }
    if (v.empty()) {
        cout << -1;
        return 0;
    }
    int sum = 0;
    for (int i: v) {
        sum += i;
    }
    cout << sum << '\n' << *v.begin();
}