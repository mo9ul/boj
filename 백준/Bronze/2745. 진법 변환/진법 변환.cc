#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string N;
    int B;
    cin >> N >> B;
    int ans = 0;
    for (int i = 0; i < N.length(); i++) {
        if ('0' <= N[i] && N[i] <= '9') {
            ans = ans * B + (N[i] - '0');
        }
        else {
            ans = ans * B + (N[i] - 'A' + 10);
        }
    }
    cout << ans;
}

// 1234(16) => 1*16^3 + 2*16^2 + 3*16^1 + 4*16^0 인거임