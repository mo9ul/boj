#include <bits/stdc++.h>
using namespace std;

int fact(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }
    else {
        return a * fact(a-1);
    }
}

int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    cout << fact(N) / (fact(K) * fact(N - K));

    return 0;
}