#include <iostream>
using namespace std;

int main() {
    double A, B;

    cin >> A >> B;

    cout.precision(9);
    cout << fixed;
    cout << A/B;
    cout.unsetf(ios::fixed);

    return 0;
}