#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string seq;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> seq;
        int count = 0;
        int sum = 0;
        for(int j = 0; j < seq.size(); j++) {
            if(seq[j] == 'O') {
                count++;
            }
            else {
                count = 0;
            }
            sum += count;
        }
        cout << sum << endl;
    }

    return 0;
}
