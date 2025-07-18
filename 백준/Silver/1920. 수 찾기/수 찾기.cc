#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[1000001];

void binarySearch(int x) {
    int left = 0, mid = 0, right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            cout << 1 << '\n';
            return;
        }
        else if (arr[mid] > x) {
            right = mid - 1;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
    }
    cout << 0 << '\n';

    return;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    cin >> m;
    int x;
    for (int i = 0; i < m; i++) {
        cin >> x;
        binarySearch(x);
    }

}