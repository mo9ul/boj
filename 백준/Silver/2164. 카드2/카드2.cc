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
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (q.size() != 1)
    {
        q.pop();
        if (q.size() != 1)
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        else
        {
            break;
        }
    }

    cout << q.front();
}