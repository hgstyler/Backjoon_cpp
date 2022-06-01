// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2581, BJ Online Judge
// https://www.acmicpc.net/problem/2581

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

template <class vector>
void is_prime(int m, int n, vector* v, vector* v1) {
    int j;

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

}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int m, n, sum, min;
    vector<bool> vec;
    vector<int> prime_group;

    cin >> m;
    cin >> n;

    is_prime(m, n, &vec, &prime_group);

    for (int i = 0; i < prime_group.size(); i++) {
        cout << prime_group[i] << " ";
    }

    return 0;
} // END