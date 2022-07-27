// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1010, BJ Online Judge
// https://www.acmicpc.net/problem/1010

#include <iostream>
#include <vector>
using namespace std;

void cpp_init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    cpp_init();

    int t, n, m, r;
    long long res;
    vector<long long> res_v;
    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        res = 1;
        r = 1;

        for (int i = m; i > m - n; --i) {
            res *= i;
            res /= r;
            ++r;
        }

        res_v.push_back(res);
    }

    for (auto i : res_v) {
        cout << i << "\n";
    }

    return 0;
} // END