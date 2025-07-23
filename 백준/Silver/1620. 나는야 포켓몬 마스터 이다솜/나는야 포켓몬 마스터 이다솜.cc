#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    map<string, int> poke;
    map<int, string> poke2;
    for (int i = 1; i <= N; i++) {
        string name;
        cin >> name;
        poke[name] = i;
        poke2[i] = name;
    }
    for (int i = 0; i < M; i++) {
        string enter;
        cin >> enter;
        if (isdigit(enter[0]) == true) {
            int num = stoi(enter);
            cout << poke2[num] << '\n';
        }
        else {
            cout << poke[enter] << '\n';
        }
    }
}