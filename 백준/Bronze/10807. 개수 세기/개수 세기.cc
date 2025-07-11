#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, v;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> v;
    int cnt = 0;
    for (int j = 0; j < N; j++) {
        if (arr[j] == v) {
            cnt++;
        }
    }
    cout << cnt;
}