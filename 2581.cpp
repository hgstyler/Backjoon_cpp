// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2581, BJ Online Judge
// https://www.acmicpc.net/problem/2581

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

vector<int> is_prime(int m, int n) {
    int j;
    vector<bool> v;
    vector<int> v1;

    for (int cnt = 0; cnt < n + 1; cnt++) {
        v.push_back(true);
    }
    v[0] = false; v[1] = false;

    for (int i = 2; i < int(sqrt(n) + 1); i++) {
        if (v[i] == true) {
            j = 2;
            while (i * j <= n) {
                v[i * j] = false;
                j++;
            }
        }
    }

    for (int i = m; i < n + 1; i++) {
        if (v[i] == true) {
            v1.push_back(i);
        }
    }

    return v1;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int m, n, sum, min;
    vector<int> prime_group;

    cin >> m;
    cin >> n;

    prime_group = is_prime(m, n);

    if (prime_group.size() != 0) {
        cout << accumulate(prime_group.begin(), prime_group.end(), 0) << "\n";
        cout << prime_group[0] << "\n";
    }
    else {
        cout << "-1\n";
    }

    return 0;
} // END