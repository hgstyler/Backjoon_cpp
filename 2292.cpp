// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2292, BJ Online Judge
// https://www.acmicpc.net/problem/2292

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, a = 1, room = 1;
    cin >> n;

    if (n == 1) {
        cout << n;
    }
    else {
        while (n > a) {
            a += 6 * room;
            room++;
        }
        cout << room;
    }

    return 0;
} // END