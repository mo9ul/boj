#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

// 1번연산은 그냥 pop_front()
// 2번연산은 pop_front()하고 push_back()
// 3번연산은 pop_back()하고 push_front()
// 로직)
// 덱 사이즈를 구하고 인덱스가 중앙값보다 작으면 추출값이 나올때까지 2번 중앙값보다 크면 3번

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    deque<int> d;
    for (int i = 1; i <= n; i++)
    {
        d.push_back(i);
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int target;
        cin >> target;
        int target_idx = find(d.begin(), d.end(), target) - d.begin();
        if (target == d.front())
        {
            d.pop_front();
        }
        else
        {
            if (target_idx <= d.size() / 2)
            {
                while (target != d.front())
                {
                    d.push_back(d.front());
                    d.pop_front();
                    ans++;
                }
                d.pop_front();
            }
            else
            {
                while (target != d.front())
                {
                    d.push_front(d.back());
                    d.pop_back();
                    ans++;
                }
                d.pop_front();
            }
        }
    }

    cout << ans;
}