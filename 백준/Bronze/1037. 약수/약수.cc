#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    vector<int> v;
    for (int i = 0; i < a; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    if (a == 1) {
        cout << v[0] * v[0];
    }
    else {
        auto minVal = *min_element(v.begin(), v.end());
        auto maxVal = *max_element(v.begin(), v.end());
        cout << minVal * maxVal;
    }
}