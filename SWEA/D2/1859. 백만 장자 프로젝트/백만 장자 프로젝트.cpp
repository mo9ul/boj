#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        vector<int> v(N);
        for (int j = 0; j < N; j++)
        {
            cin >> v[j];
        }

        long long ans = 0;
        int max_val = 0;
        for (auto it = v.rbegin(); it != v.rend(); it++)
        {
            if (*it > max_val)
            {
                max_val = *it;
            }
            else
            {
                ans += max_val - *it;
            }
        }

        cout << '#' << i + 1 << " " << ans << '\n';
    }
}