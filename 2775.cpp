// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2775, BJ Online Judge
// https://www.acmicpc.net/problem/2775

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, k, n, sub_sum;
    vector<vector <int>> room;
    vector<int> floor;

    cin >> t;

    for (int cnt = 0; cnt < t; cnt++) {
        cin >> k; cin >> n;

        for (int cnt1 = 0; cnt1 <= n; cnt1++) {
            floor.push_back(cnt1);
        }
        room.push_back(floor);
        
        for (int cnt1 = 1; cnt1 <= k; cnt1++) {
            for (int cnt2 = 1; cnt2 <= n; cnt2++) {
                sub_sum = 0;
                for (int cnt3 = 1; cnt3 <= cnt2; cnt3++) {
                    sub_sum += room[cnt1 - 1][cnt3];
                }
                floor[cnt2] = sub_sum;
            }
            room.push_back(floor);
        }

        cout << room[k][n] << "\n";
        room.clear(); floor.clear();
    }

    return 0;
} // END