#include <iostream>
using namespace std;

int arr[10];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;
    while (num > 0)
    {
        if (num % 10 == 6 && arr[6] - arr[9] > 0)
        {
            arr[9]++;
        }
        else if (num % 10 == 9 && arr[9] - arr[6] > 0)
        {
            arr[6]++;
        }
        else
            arr[num % 10]++;

        num /= 10;
    }
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}