#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        string op;
        cin >> op;
        if (op == "push")
        {
            int i;
            cin >> i;
            q.push(i);
        }
        else if (op == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if (op == "size")
        {
            cout << q.size() << '\n';
        }
        else if (op == "empty")
        {
            if (q.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (op == "front")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
            }
        }
        else
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.back() << '\n';
            }
        }
    }
}