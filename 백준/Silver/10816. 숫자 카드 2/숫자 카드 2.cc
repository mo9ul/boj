#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    map<int, int> sangeun;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        sangeun[num]++;
    } // 상근이가 갖고있는 숫자카드와 그 개수를 저장
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        cout << sangeun[num] << " ";
    }
}