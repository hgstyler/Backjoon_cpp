// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1193, BJ Online Judge
// https://www.acmicpc.net/problem/1193

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int line_index = 1;
    while (n > line_index) {
        n -= line_index;
        line_index++;
    }

    if (line_index % 2 == 0) { // line_index is even
        cout << n << "/" << line_index + 1 - n;
    }
    else {
        cout << line_index + 1 - n << "/" << n;
    }

    return 0;
} // END