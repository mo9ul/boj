#include <bits/stdc++.h>
using namespace std;

// 아스키코드 활용

int main() {
    int A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;
    cout << A + B - C << "\n";
    string num = to_string(A)+ to_string(B);
    cout << stoi(num) - C << "\n";
    return 0;
}