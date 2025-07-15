#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;
    int M;
    cin >> M;
    list<char> l;
    for (char c: word) {
        l.push_back(c);
    }
    auto cursor = l.end(); // end 함수는 마지막 요소의 다음을 가리킨다
    for (int i = 0; i < M; i++) {
        char op;
        cin >> op;
        if (op == 'P') {
            char add;
            cin >> add;
            // cursor왼쪽에 add를 insert
            // insert 함수는 이터레이터의 왼쪽에 요소를 삽입한다
            // 첫번째 인자는 무조건 이터레이터만 받는다
            l.insert(cursor, add);
        }
        else if (op == 'L') {
            if (cursor != l.begin()) {
                cursor--;
            }
        }
        else if (op == 'D') {
            if (cursor != l.end()) {
                cursor++;
            }
        }
        else { // op == B
            if (cursor != l.begin()) {
                cursor--;
                cursor = l.erase(cursor); // cursor = 가 빠지면 이터레이터가 무효화 되어 런타임 에러가 뜬다
                // erase함수는 삭제된 요소 다음 요소를 반환하므로 cursor가 원래 가리키던 요소를 가리키게 된다
            }
        }
    }
    for (char c: l) {
        cout << c;
    }
}