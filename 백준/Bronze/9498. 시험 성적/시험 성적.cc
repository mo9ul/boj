#include <iostream>
using namespace std;

int main()
{
    // 정수로 시험 점수를 입력받는다 (0 <= 시험점수 <= 100)
    int score;
    cin >> score;
    // 성적을 출력한다
    if (score <= 100 and score >= 90) cout << "A";
    else if (score >= 80) cout << "B";
    else if (score >= 70) cout << "C";
    else if (score >= 60) cout << "D";
    else cout << "F";

    return 0;
}
