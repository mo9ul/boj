#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    else {
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int cut = round(v.size() * 0.15);
        int sum = 0;
        for (int i = cut; i < n - cut; i++) {
            sum += v[i];
        }
        double mean = round(double(sum) / double(v.size() - cut * 2));
        cout << mean;
    }
}
