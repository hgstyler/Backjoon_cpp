// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 5622, BJ Online Judge
// https://www.acmicpc.net/problem/5622

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string dial;
    vector<int> dial_sec = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
    int sum = 0;

    cin >> dial;

    for (int cnt = 0; cnt < dial.length(); cnt++) {
        sum += dial_sec[char(dial[cnt]) - 65];
    }

    cout << sum;

    return 0;
} // END