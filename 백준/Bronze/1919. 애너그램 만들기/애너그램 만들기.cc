#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 알파벳 배열 a[26] = {};
    // cin s1,s2
    // for(char c : s1) a[c - 'a']++;
    // for(char c : s2) a[c - 'a']--;
    // 이제 a 배열에서 0이 아닌 것들을 카운트에 더한다.
    int a[26] = {};
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (char c: s1) {
        a[c - 'a']++;
    }
    for (char c: s2) {
        a[c - 'a']--;
    }
    int cnt = 0;
    for (int i: a) {
        if (i != 0) {
            cnt += abs(i);
        }
    }
    cout << cnt;
}