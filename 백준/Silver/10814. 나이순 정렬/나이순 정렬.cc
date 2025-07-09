#include <bits/stdc++.h>
using namespace std;

struct member {
    string name;
    int age;
    int seq;
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<member> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i].age >> m[i].name;
        m[i].seq = i + 1;
    }
    stable_sort(m.begin(), m.end(), [](const member& a, const member& b) {
        return a.age < b.age;
    });

    for (int j = 0; j < N; j++) {
        cout << m[j].age << " " << m[j].name << '\n';
    }
}