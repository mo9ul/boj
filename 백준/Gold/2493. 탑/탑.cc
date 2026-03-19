#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    cin >> n;
    stack<pair<int, int>> s;
    s.push({100000001, 0});
    for (int i = 1; i <= n; i++)
    {
        cin >> h;
        if (h <= s.top().first)
        {
            cout << s.top().second << " ";
            s.push({h, i});
        }
        else
        {
            while (s.top().first < h)
            {
                s.pop();
            }
            cout << s.top().second << " ";
            s.push({h, i});
        }
    }
}