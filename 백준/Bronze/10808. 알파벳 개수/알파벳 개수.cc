#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin >> S;
    for (char a = 'a'; a <= 'z'; a++) {
        int cnt = 0;
        for (auto s : S) {
            if (s == a) {
                cnt++;
            }
        }
        cout << cnt << " ";
    }
}