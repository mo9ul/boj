#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string a, b;
    cin >> n;

    // 알파벳 배열을 만든다. (a = 0, b = 1... 이런식)
    // 문자열을 이터레이팅하면서 알파벳 배열의 값을 증가시킨다.
    // a면 0번째 값을, b면 1번째 값을 증가시키는 식으로.
    // 알파벳 배열을 돌면서 홀수가 나오면 Impossible, 안나오면 Possible을 출력한다.

    for (int i = 0; i < n; i++)
    {
        int arr_a[26] = {0};
        int arr_b[26] = {0};
        bool isValid = true;
        cin >> a >> b;
        for (int j = 0; j < a.length(); j++)
        {
            arr_a[a[j] - 'a']++;
        }
        for (int j = 0; j < b.length(); j++)
        {
            arr_b[b[j] - 'a']++;
        }

        for (int j = 0; j < 26; j++)
        {
            if (arr_a[j] != arr_b[j])
            {
                isValid = false;
                break;
            }
        }

        if (isValid == true)
        {
            cout << "Possible" << '\n';
        }
        else
        {
            cout << "Impossible" << '\n';
        }
    }
}