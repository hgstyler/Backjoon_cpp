// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1002, BJ Online Judge
// https://www.acmicpc.net/problem/1002

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t, x1, y1, r1, x2, y2, r2, d, r_min, r_max;
    cin >> t;
    vector<string> res;

    while (t--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        r_min = (r1 - r2) * (r1 - r2);
        r_max = (r1 + r2) * (r1 + r2);

        if (d == 0 && r_min == 0) {
            res.push_back("-1\n");
        }
        else if (d == r_min || d == r_max) {
            res.push_back("1\n");
        }
        else if (d > r_min && d < r_max) {
            res.push_back("2\n");
        }
        else {
            res.push_back("0\n");
        }
    }

    for (auto i : res) {
        cout << i;
    }

    return 0;
} // END