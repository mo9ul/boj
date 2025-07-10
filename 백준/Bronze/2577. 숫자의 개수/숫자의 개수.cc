#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C;
    cin >> A >> B >> C;
    int mul = A*B*C;
    vector<int> digits;
    string s = to_string(mul);
    for (char c : s) {
        digits.push_back(c - '0');
    }
    int arr[10];
    fill(arr, arr+10, 0);
    for (int i : digits) {
        arr[i]++;
    }
    for (int j = 0; j < 10; j++) {
        cout << arr[j] << '\n';
    }

}