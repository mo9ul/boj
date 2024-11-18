#include <iostream>
using namespace std;

int main()
{
    // 3개의 주사위 눈이 주어진다
    int A, B, C;
    cin >> A >> B >> C;
    // 3개의 눈이 같은 경우
    if (A == B && B == C) cout << 10000 + (A * 1000);
    // 2개의 눈이 같은 경우
    else if (A == B && B != C) cout << 1000 + (A * 100);
    else if (B == C && A != C) cout << 1000 + (B * 100);
    else if (A == C && B != A) cout << 1000 + (C * 100);
    // 눈이 전부 다른 경우
    // A가 가장 큰 경우
    else if (A > B && B > C) cout << A * 100;
    else if (A > C && C > B) cout << A * 100;
    // B가 가장 큰 경우
    else if (B > A && A > C) cout << B * 100;
    else if (B > C && C > A) cout << B * 100;
    // C가 가장 큰 경우
    else cout << C * 100;

    return 0;
}
