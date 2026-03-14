#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    while (N--) {
        int a[26] = {};
        string s1, s2;
        cin >> s1 >> s2;
        for (auto c: s1) {
            a[c-'a']++;
        }
        for (auto c: s2) {
            a[c-'a']--;
        }
        bool isPossible = true;
        for (auto n: a) {
            if (n != 0) {
                isPossible = false;
            }
        }
        if (isPossible == true) {
            cout << "Possible" << '\n';
        }
        else {
            cout << "Impossible" << '\n';
        }
    }
}