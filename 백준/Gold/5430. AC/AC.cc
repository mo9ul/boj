#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void parse(string &a, deque<int> &d)
{
    int cur = 0;
    for (int i = 1; i + 1 < a.size(); i++)
    {
        if (a[i] == ',')
        {
            d.push_back(cur);
            cur = 0;
        }
        else
        {
            cur = 10 * cur + (a[i] - '0');
        }
    }

    if (cur != 0)
    {
        d.push_back(cur);
    }
}

void print(deque<int> &d)
{
    cout << '[';
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i];
        if (i + 1 != d.size())
        {
            cout << ',';
        }
    }
    cout << ']' << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    string query, arr;

    cin >> t;

    while (t--)
    {
        deque<int> d;
        int isReversed = 0;
        bool isValid = true;
        cin >> query >> n >> arr;
        parse(arr, d);

        for (char c : query)
        {
            if (c == 'R')
            {
                isReversed = 1 - isReversed;
            }
            else
            {
                if (d.empty())
                {
                    isValid = false;
                    break;
                }
                if (isReversed == 0)
                {
                    d.pop_front();
                }
                else
                {
                    d.pop_back();
                }
            }
        }

        if (isValid == false)
        {
            cout << "error" << '\n';
        }
        else
        {
            if (isReversed == 1)
            {
                reverse(d.begin(), d.end());
            }
            print(d);
        }
    }
}