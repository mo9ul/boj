#include <bits/stdc++.h>
using namespace std;

int N, K, len = 0;
int pre[5001];
int nxt[5001];
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    // 원형 연결 리스트 필요
    for (int i = 1; i <= N; i++) { // 처음과 끝을 이어준다. 데이터와 인덱스를 통일 -> 직관적
        pre[i] = (i==1) ? N : i - 1;
        nxt[i] = (i==N) ? 1 : i + 1;
        len++;
    }
    // k번째를 제거하고, v에 제거된 순서대로 푸쉬백
    int i = 1;
    for (int cur = 1; len != 0; cur = nxt[cur]) {
        if (i == K) {
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur]; // 이거까지 돌면 현재노드는 삭제됨
            v.push_back(cur);
            i = 1; // 일종의 카운트인 셈. 얘가 계속 초기화되고 다시 증가하면서 cur를 포함해서 세번 뛴다음, 해당 노드를 삭제하고 v에 추가.
            len--;
        }
        else {
            i++;
        }
    } // 요세푸스 순열 완성

    cout << "<";
    for (int i = 0; i < N; i++) {
        if (i == N-1) {
            cout << v[i];
        }
        else {
            cout << v[i] << ", ";
        }
    }
    cout << ">";
}