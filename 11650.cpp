// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11650, BJ Online Judge
// https://www.acmicpc.net/problem/11650

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, x, y;

    cin >> n;
    vector<pair<int, int>> point_vec;
    pair<int, int> point;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        point.first = x;
        point.second = y;
        point_vec.push_back(point);
    }

    sort(point_vec.begin(), point_vec.end());

    for (int i = 0; i < n; ++i) {
        cout << point_vec[i].first << " " << point_vec[i].second << "\n";
    }

    return 0;
} // END