#include <iostream>
using namespace std;

int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, num;
    cin >> a >> b >> c;
    num = a * b * c;
    string num_str = to_string(num);
    for (int i = 0; i < num_str.length(); i++) {
        int idx = num_str[i] - '0';
        arr[idx]++;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << '\n';
    }
}