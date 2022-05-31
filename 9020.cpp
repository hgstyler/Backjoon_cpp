// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 9020, BJ Online Judge
// https://www.acmicpc.net/problem/9020

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    for (int cnt = 2; cnt < int(sqrt(n)) + 1; cnt++) {
        if (n % cnt == 0) {
            return false;
            break;
        }
    }

    return true;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, n, n1;
    cin >> t;

    for (int cnt = 0; cnt < t; cnt++) {
        cin >> n;
        n1 = n / 2;

        if (is_prime(n1)) {
            cout << n1 << " " << n1 << "\n";
        }
        else {
            while (n1 > 0) {
                n1--;
                if (is_prime(n1) && is_prime(n-n1)) {
                    cout << n1 << " " << n-n1 << "\n";
                    break;
                }
            }
        }
    }

    return 0;
} // END