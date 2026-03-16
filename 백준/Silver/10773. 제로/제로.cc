#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n;
    cin >> k;
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        if (n == 0)
        {
            s.pop();
        }
        else
        {
            s.push(n);
        }
    }

    int ans = 0;
    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }

    cout << ans;
}