#include <iostream>
#include <vector>
using namespace std;

#define s first
#define y second

int male[7];
int female[7];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 참가하는 총 학생 수 n, 한 방에 들어갈 수 있는 최대인원 k 입력
    int n, k;
    cin >> n >> k;

    // 학생 정보(성별, 학년) 입력
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].s >> v[i].y;
    }

    // 방 배정
    // 로직: 남녀 배열(총 7칸, 1~6학년)을 만들고, for문으로 학생 전원 탐색.
    // 성별에 따라 분기시키고 성별_배열[학년] 값을 증가.
    // 성별_배열[학년] 값이 k가 될때마다 정답카운트 증가시키고 성별_배열[학년] 값 0으로 초기화.
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].s == 1) // 남학생인 경우
        {
            if (male[v[i].y] + 1 == k)
            {
                ans++;
                male[v[i].y] = 0;
            }
            else
            {
                male[v[i].y]++;
            }
        }
        else // 여학생인 경우
        {
            if (female[v[i].y] + 1 == k)
            {
                ans++;
                female[v[i].y] = 0;
            }
            else
            {
                female[v[i].y]++;
            }
        }
    }
    // 배열에 남은 값(0보다 크지만 k보다 작아서 초기화 되지 않는 성별_배열[학년]값)이 있을때마다 ans를 증가.
    for (int i = 0; i < 7; i++)
    {
        if (male[i] > 0)
        {
            ans++;
        }

        if (female[i] > 0)
        {
            ans++;
        }
    }

    cout << ans;
}

// 같은 방 -> 학년, 성별 동일해야함
// 최대 인원 수 k
// 참가하는 총 학생 수 n
// 성별 s(여 0, 남 1)
// 학년 y
// 모든 학생을 배정해야함