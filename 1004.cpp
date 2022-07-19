// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1004, BJ Online Judge
// https://www.acmicpc.net/problem/1004

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t, x1, y1, x2, y2, n, x, y, r, cond1, cond2, routes;
    vector<int> res;
    cin >> t;

    while (t--) {
        routes = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        cin >> n;
        while (n--) {
            cin >> x >> y >> r;

            cond1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
            cond2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);

            if ((cond1 < r * r && cond2 < r * r) || (cond1 > r * r && cond2 > r * r)) {
                continue;
            }
            else {
                routes++;
            }
        }

        res.push_back(routes);
    }

    for (auto i : res) {
        cout << i << "\n";
    }

    return 0;
} // END