#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string a, b;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            cout << "Possible" << '\n';
        }
        else {
            cout << "Impossible" << '\n';
        }
    }
}