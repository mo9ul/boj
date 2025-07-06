#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int lcm(int a, int b) {
    // a * b == lcm * gcd
    return a * b / gcd(a, b);
}

int main() {
    int A, B;
    cin >> A >> B;

    cout << gcd(A, B) << '\n';
    cout << lcm(A, B);

    return 0;
}