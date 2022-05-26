// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10809, BJ Online Judge
// https://www.acmicpc.net/problem/10809

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    vector<int> lower_letter;

    cin >> s;
    
    for (int cnt = 0; cnt < 26; cnt++) {
        lower_letter.push_back(-1);
    }

    for (int cnt = 0; cnt < size(s); cnt++) {
        for (int cnt1 = 0; cnt1 < 26; cnt1++) {
            if (s[cnt] == char(cnt1 + 97)) {
                if (lower_letter[cnt1] == -1) {
                    lower_letter[cnt1] = cnt;
                }
            }
        }
    }

    for (int cnt = 0; cnt < 26; cnt++) {
        cout << lower_letter[cnt] << " ";
    }

    return 0;
} // END