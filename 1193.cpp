// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2869, BJ Online Judge
// https://www.acmicpc.net/problem/2869

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a,b,v;
    cin >> a >> b >> v;

    cout << int((v - b - 1) / (a - b) + 1);

    return 0;
} // END