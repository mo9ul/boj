#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int apt[15][15];
    for (int i = 1; i < 15; i++) {
        apt[0][i] = i;
    }

    for (int i = 1; i < 15; i++) {
        int sum = 0;
        for (int j = 1; j < 15; j++) {
            sum += apt[i-1][j];
            apt[i][j] = sum;
        }
    }
    // apt[1][1] = apt[0][1]
    // apt[1][2] = apt[0][1] + apt[0][2]
    int T, k, n;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> k;
        cin >> n;
        cout << apt[k][n] << '\n';
    }
}