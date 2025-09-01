#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int num;
        cin >> num;
        while (num != 0) {
            if (num >= 25) {
                a = num / 25;
                num = num - 25 * a;
            }
            else if (num >= 10) {
                b = num / 10;
                num = num - 10 * b;
            }
            else if (num >= 5) {
                c = num / 5;
                num = num - 5 * c;
            }
            else {
                d = num / 1;
                num = num - 1 * d;
            }
        }
        cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    }
}