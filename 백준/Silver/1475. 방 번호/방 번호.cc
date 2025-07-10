#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    // N을 10으로 나눈 나머지를 추출해. 그리고 그 나머지를 인덱스로 써.
    // 근데 N자체가 줄어야 하잖아. 10으로 나눈 몫만 남겨.
    // 근데 계속 줄다가 언젠가 없어지잖아. 그걸 조건문으로 써.
    int arr[10];
    fill(arr, arr+10, 0);
    while (N > 0) { // 혹은 그냥 while(N)도 됨. 어차피 0되면 false니까 끝남.
        arr[N%10]++;
        N /= 10;
    } // 이러면 자릿수 추출 완료.

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) {
            continue;
        }
        ans = max(ans, arr[i]); // ans가 최대값으로 유지됨.
    }
    // arr[6]+arr[9] / 2 + 1 이 필요한 최소세트수일경우
    ans = max(ans, (arr[6]+arr[9]+1)/2);
    cout << ans;
}