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

    int n;
    cin >> n;

    cout << (n - 1) / 6 + 1;

    // 1 7 19 37
    // 0 6 12 18

    return 0;
} // END