// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2839, BJ Online Judge
// https://www.acmicpc.net/problem/2839

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, num5, num3;

    cin >> n;
    
    num5 = n / 5;

    while (num5 >= 0) {
        if (n % 5 == 0 || (n - num5 * 5) % 3 == 0) {
            break;
        }
        else {
            num5--;
        }
    }

    num3 = (n - num5 * 5) / 3;

    if (n == num5 * 5 + num3 * 3 && num5 >= 0) {
        cout << num5 + num3;
    }
    else {
        cout << -1;
    }

    return 0;
} // END