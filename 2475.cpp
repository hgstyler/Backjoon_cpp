// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2475, BJ Online Judge
// https://www.acmicpc.net/problem/2475

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tmp, sum = 0;

    for (int i = 0; i < 5; ++i) {
        cin >> tmp;
        sum += tmp * tmp;
    }

    cout << sum % 10;

    return 0;
} // END