// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 5086, BJ Online Judge
// https://www.acmicpc.net/problem/5086

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n = 1, m = 1;
    vector<string> result;

    while (n != 0 && m != 0) {
        cin >> n >> m;

        if (n < m && m % n == 0) {
            result.push_back("factor");
        }
        else if (n > m && n % m == 0) {
            result.push_back("multiple");
        }
        else if (n != 0 && m != 0) {
            result.push_back("neither");
        }
    }

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << "\n";
    }

    return 0;
} // END