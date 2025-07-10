#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
bool occur[2000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (x - arr[i] > 0 && occur[x-arr[i]]) {
            ans++;
        }
        occur[arr[i]] = true;
    }

    cout << ans;
}
