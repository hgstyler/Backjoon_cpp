// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1676, BJ Online Judge
// https://www.acmicpc.net/problem/1676

#include <iostream>
#include <vector>
using namespace std;

void cpp_init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    cpp_init();

    int n, res = 0;
    cin >> n;

    for (int i = 5; i <= n; i *= 5) {
        res += n / i;
    }

    cout << res;

    return 0;
} // END