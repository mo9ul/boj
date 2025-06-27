#include <bits/stdc++.h>
using namespace std;

int main() {
    int c_major[8];
    cin >> c_major[0] >> c_major[1] >> c_major[2] >> c_major[3] >> c_major[4] >> c_major[5] >> c_major[6] >> c_major[7];
    if(c_major[0] == 1 && c_major[1] == 2 && c_major[2] == 3 && c_major[3] == 4 && c_major[4] == 5 && c_major[5] == 6 && c_major[6] == 7 && c_major[7] == 8) {
        cout << "ascending";
    }
    else if(c_major[0] == 8 && c_major[1] == 7 && c_major[2] == 6 && c_major[3] == 5 && c_major[4] == 4 && c_major[5] == 3 && c_major[6] == 2 && c_major[7] == 1) {
        cout << "descending";
    }
    else {
        cout << "mixed";
    }
}

