// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1712, BJ Online Judge
// https://www.acmicpc.net/problem/1712

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    if (c - b <= 0) {
        cout << "-1";
    }
    else {
        cout << a / (c - b) + 1;
    }

    return 0;
} // END