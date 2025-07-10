#include <bits/stdc++.h>
using namespace std;

struct word {
    string s;
    int len;
};

bool comp(const word& a, const word& b) {
    if (a.len != b.len) {
        return a.len < b.len;
    }
    else {
        return a.s < b.s;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<word> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].s;
        v[i].len = v[i].s.size(); // length나 size나 같단다. 타이핑을 조금이라도 덜 치는 size를 애용하자.
    }

    sort(v.begin(), v.end(), comp);

    // 중복제거
    vector<string> result;
    result.push_back(v[0].s);
    for (int i = 1; i < N; i++) {
        if (v[i].s != v[i - 1].s) {
            result.push_back(v[i].s);
        }
    } // 첫 요소는 그냥 푸쉬백. 그 다음 요소부터는 이전요소와 동일하지 않을때만 푸쉬백.

    for (auto& s : result) {
        cout << s << '\n';
    }
}