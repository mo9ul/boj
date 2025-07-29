#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int K;
    cin >> K;

    stack<int> s;
    for (int i = 0; i < K; i++) {
        int n;
        cin >> n;
        if (n != 0) {
            s.push(n);
        }
        else {
            s.pop();
        }
    }

    int sum = 0;
    while (!s.empty()) {
        sum += s.top(); // 맨 윗 요소를 더하고
        s.pop(); // 제거한다
    }

    cout << sum;
}