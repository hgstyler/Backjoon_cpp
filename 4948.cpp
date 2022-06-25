// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 4948, BJ Online Judge
// https://www.acmicpc.net/problem/4948

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, n2, cnt;
    vector<bool> prime_number(246913);
    fill(prime_number.begin(), prime_number.end(), true);
    prime_number[0] = false;
    prime_number[1] = false;

    while (true) {
        cnt = 0;
        cin >> n;
        n2 = 2 * n;

        if (n != 0) {
            for (int i = 2; i * 2 <= n2; ++i) {
                if (!prime_number[i]) {
                    continue;
                }
                else {
                    for (int j = n2 / i; i * j <= n2 && j >= 2; --j) {
                        prime_number[i * j] = false;
                    }
                }
            }

            for (int i = n + 1; i <= n2; ++i) {
                if (prime_number[i]) {
                    cnt++;
                }
            }

            cout << cnt << "\n";
        }
        else {
            break;
        }
    }

    return 0;
}