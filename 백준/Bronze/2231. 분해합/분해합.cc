#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int res = 0;
    for (int i = 1; i < N; i++) {
        int sum = 0;
        int num = i;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum + i == N) {
            res = i;
            break;
        }
    }
    cout << res;
}