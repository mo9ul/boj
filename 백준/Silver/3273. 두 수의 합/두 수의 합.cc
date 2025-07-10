#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;

    unordered_map<int, int> m;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int target = x - arr[i]; // x - 지금 관찰하는 수
        if (m[target] > 0) { // 해시맵에 그 타겟값이 있다면 0보다 클테니까
            cnt += m[target]; // 한 쌍의 한 요소는 다른 쌍의 요소로도 이용될 수 있으니
        }
        m[arr[i]]++; // arr[i]라는 값을 키로 추가 하는거지.
    }
    cout << cnt;
}