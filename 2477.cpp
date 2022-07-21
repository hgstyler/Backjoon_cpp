// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2477, BJ Online Judge
// https://www.acmicpc.net/problem/2477

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void cpp_init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    cpp_init();

    int k, tmp1, tmp2, len_NS = 0, len_EW = 0;
    vector<pair<int, int>> melon_field;
    int target_index, x_iter, y_iter;

    cin >> k;
    for (int i = 0; i < 6; ++i) {
        cin >> tmp1 >> tmp2;
        melon_field.push_back(make_pair(tmp1, tmp2));
        if (tmp1 <= 2) {
            len_EW += tmp2;
        }
        else {
            len_NS += tmp2;
        }
    }

    len_EW /= 2;
    len_NS /= 2;

    for (int i = 0; i < 6; ++i) {
        if (i < 5) {
            bool cond = (melon_field[i].second == len_EW || melon_field[i].second == len_NS) && (melon_field[i + 1].second == len_EW || melon_field[i + 1].second == len_NS);
            if (cond) {
                target_index = i + 1;
                break;
            }
        }
        else {
            bool cond = (melon_field[i].second == len_EW || melon_field[i].second == len_NS) && (melon_field[0].second == len_EW || melon_field[0].second == len_NS);
            if (cond) {
                target_index = 0;
                break;
            }
        }
    }

    x_iter = target_index + 2;
    if (x_iter >= 6) {
        x_iter -= 6;
    }
    y_iter = target_index + 3;
    if (y_iter >= 6) {
        y_iter -= 6;
    }

    cout << (len_EW * len_NS - melon_field[x_iter].second * melon_field[y_iter].second) * k;
    
    return 0;
} // END