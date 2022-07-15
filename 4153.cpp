// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 4153, BJ Online Judge
// https://www.acmicpc.net/problem/4153

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tmp1 = 1, tmp2 = 1, tmp3 = 1;
    vector<int> tri;
    vector<string> tri_res;

    while (tmp1 != 0 && tmp2 != 0 && tmp3 != 0) {
        cin >> tmp1 >> tmp2 >> tmp3;
        
        tri.push_back(tmp1);
        tri.push_back(tmp2);
        tri.push_back(tmp3);

        sort(tri.begin(), tri.end());
        bool tri_condition = (pow(tri[0], 2) + pow(tri[1], 2) == pow(tri[2], 2));

        if (tmp1 != 0 && tmp2 != 0 && tmp3 != 0) {
            if (tri_condition) {
                tri_res.push_back("right");
            }
            else {
                tri_res.push_back("wrong");
            }
        }

        tri.clear();
    }

    for (auto i : tri_res) {
        cout << i << "\n";
    }

    return 0;
} // END