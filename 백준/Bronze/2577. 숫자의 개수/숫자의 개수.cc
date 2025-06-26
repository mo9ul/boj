#include <bits/stdc++.h>
using namespace std;

void Int2stk(int num, stack<int>& s) {
    if(num == 0) {
        s.push(0);
    }
    while(num != 0) {
        s.push(num % 10);
        num /= 10;
    }
}

int main()
{
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    stack<int> stk;
    Int2stk(A*B*C, stk);
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    while(stk.empty() != 1) {

        if(stk.top() == 0) {
            zero++;
            stk.pop();
        }
        else if(stk.top() == 1) {
            one++;
            stk.pop();
        }
        else if(stk.top() == 2) {
            two++;
            stk.pop();
        }
        else if(stk.top() == 3) {
            three++;
            stk.pop();
        }
        else if(stk.top() == 4) {
            four++;
            stk.pop();
        }
        else if(stk.top() == 5) {
            five++;
            stk.pop();
        }
        else if(stk.top() == 6) {
            six++;
            stk.pop();
        }
        else if(stk.top() == 7) {
            seven++;
            stk.pop();
        }
        else if(stk.top() == 8) {
            eight++;
            stk.pop();
        }
        else {
            nine++;
            stk.pop();
        }
    }
    cout << zero << endl;
    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;
    cout << five << endl;
    cout << six << endl;
    cout << seven << endl;
    cout << eight << endl;
    cout << nine << endl;

    return 0;
}