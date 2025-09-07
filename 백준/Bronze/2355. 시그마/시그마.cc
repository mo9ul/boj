#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long A, B;
    cin >> A >> B;
    if (A > B) {
        long long temp = B;
        B = A;
        A = temp;
    }
    cout << (B - A + 1) * (A + B) / 2;
}