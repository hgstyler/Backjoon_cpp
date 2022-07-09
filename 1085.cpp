// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1085, BJ Online Judge
// https://www.acmicpc.net/problem/1085

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int x, y, w, h;
    cin >> x >> y >> w >> h;
    
    vector<int> distance;
    distance.push_back(abs(x));
    distance.push_back(abs(y));
    distance.push_back(abs(w - x));
    distance.push_back(abs(h - y));

    stable_sort(distance.begin(), distance.end());

    cout << distance[0];

    return 0;
} // END