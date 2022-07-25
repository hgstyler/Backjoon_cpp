// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11051, BJ Online Judge
// https://www.acmicpc.net/problem/11051

#include <iostream>
#include <vector>
using namespace std;

void cpp_init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    cpp_init();

    int const DIV_MOD = 10007, V_MAX = 1001;

    int n, k;
    cin >> n >> k;

    vector<vector<int>> binomial_coefficient(V_MAX);
    vector<int> k_col(V_MAX, 0);
    for (int i = 0; i <= n; ++i) {
        binomial_coefficient[i] = k_col;
    }

    for (int i_n = 1; i_n <= n; ++i_n) {
        for (int i_k = 0; i_k <= n; ++i_k) {
            if (i_n == i_k || i_k == 0) {
                binomial_coefficient[i_n][i_k] = 1;
                continue;
            }
            binomial_coefficient[i_n][i_k] = (binomial_coefficient[i_n - 1][i_k] + binomial_coefficient[i_n - 1][i_k - 1]) % DIV_MOD;
        }
    }

    cout << binomial_coefficient[n][k];

    return 0;
} // END