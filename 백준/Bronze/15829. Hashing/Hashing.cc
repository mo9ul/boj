#include <bits/stdc++.h>
using namespace std;

long long Hash(int l) {
    string s;
    cin >> s;
    vector<long long> v(l);
    for (int i = 0; i < s.length(); i++) {
        v[i] = s[i] - 'a' + 1;
    }
    long long sum = 0;
    long long r = 1;
    for (int i = 0; i < l; i++) {
        if (i > 0) {
            r = (r * 31) % 1234567891;
            sum = (sum + v[i] * r) % 1234567891;
        }
        else if (i == 0) {
            sum = (sum + v[i] * r) % 1234567891;
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int L;
    cin >> L;
    cout << Hash(L);
}