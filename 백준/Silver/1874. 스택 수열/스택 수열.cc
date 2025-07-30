#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> s;
    string ans; // 정답을 출력할 문자열 변수
    int cnt = 1; // 계속 증가시키면서 스택에 push, 얘는 줄어들수없음
    while (n--) {
        int num;
        cin >> num;
        while (cnt <= num) {
            // 입력받은 수가 push할 수보다 크거나 같으면
            // push할 수를 증가시키면서 스택에 push
            s.push(cnt++);
            ans += "+\n";
        }
        if (s.top() != num) {
            // 만약 위 과정을 거쳤는데도 top과 입력받은 수가 다르다면
            // 불가능하다는 뜻이므로 (왜냐, cnt는 줄어들 수 없음)
            cout << "NO";
            return 0;
        }
        s.pop(); // top과 내가 입력한 수가 일치하니 입력값을 pop
        ans += "-\n";
    }

    cout << ans;
}