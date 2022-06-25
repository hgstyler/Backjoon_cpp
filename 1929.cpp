// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1929, BJ Online Judge
// https://www.acmicpc.net/problem/1929

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int m, n, sqt;
    cin >> m >> n;

    for (int i = m; i <= n; ++i) {
        sqt = sqrt(i);
        if (sqt == 1 && i != 1) {
            cout << i << "\n";
            continue;
        }
        else {
            if (i % 2 == 1) {
                for (int j = 2; j <= sqt; ++j) {
                    if (i % j == 0) {
                        break;
                    }
                    else if (j == sqt) {
                        cout << i << "\n";
                    }
                }
            }
        }
    }

    return 0;
}