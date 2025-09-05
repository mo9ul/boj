#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int sum = 0;
    cin >> N;
    vector<int> v1(N);
    vector<int> v2(N);
    for (int j = 0; j < N; j++) {
        cin >> v1[j];
    }
    for (int k = 0; k < N; k++) {
        cin >> v2[k];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    for (int i = 0; i < N; i++) {
        int mul = v1[i] * v2[i];
        sum += mul;
    }
    cout << sum;
}
