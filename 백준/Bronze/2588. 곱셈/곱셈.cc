#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    // 일의자리 * a
    cout << (b%10) * a << endl;
    // 십의자리 * a
    cout << ((b%100) - (b%10))/10 * a << endl;
    // 백의자리 * a
    cout << (b/100) * a << endl;
    cout << a * b;

    return 0;
}
