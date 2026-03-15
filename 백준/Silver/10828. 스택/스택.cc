#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    string op;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == "push")
        {
            cin >> num;
            v.push_back(num);
        }
        else if (op == "pop")
        {
            if (v.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << v.back() << '\n';
                v.pop_back();
            }
        }
        else if (op == "size")
        {
            cout << v.size() << '\n';
        }
        else if (op == "empty")
        {
            if (v.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (op == "top")
        {
            if (v.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << v.back() << '\n';
            }
        }
    }
}