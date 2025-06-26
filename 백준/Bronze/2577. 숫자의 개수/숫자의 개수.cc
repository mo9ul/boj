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

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int res = A*B*C;
    stack<int> s;
    Int2stk(res,s); // 정수 각 자릿수를 스택에 담는 함수
    int count[10] = {}; // 자릿수 별 카운트를 담을 배열이다. 0~9까지 10개를 받는다.

    while(!s.empty()) { // 스택이 비어있지 않다면, 맨 윗 요소를 확인하고 해당 숫자의 카운트를 올린다. 그러고 pop.
        count[s.top()]++;
        s.pop();
    }

    for(int i = 0; i < 10; i++) {
        cout << count[i] << endl;
    }

    return 0;
}