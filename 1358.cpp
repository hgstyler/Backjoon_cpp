// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1358, BJ Online Judge
// https://www.acmicpc.net/problem/1358

#include <iostream>
using namespace std;

void cpp_init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    cpp_init();

    int w, h, x, y, p, inside_cnt = 0, x_player, y_player;
    cin >> w >> h >> x >> y >> p;
    int r = h / 2, x1 = x, y1 = y + r, x2 = x + w, y2 = y + r;
    
    while (p--) {
        cin >> x_player >> y_player;
        int d1 = (x_player - x1) * (x_player - x1) + (y_player - y1) * (y_player - y1);
        int d2 = (x_player - x2) * (x_player - x2) + (y_player - y2) * (y_player - y2);

        bool cond1 = (d1 <= r * r) + (d2 <= r * r);

        bool cond2_sub1 = (x_player >= x) * (x_player <= x + w);
        bool cond2_sub2 = (y_player >= y) * (y_player <= y + h);
        bool cond2 = cond2_sub1 * cond2_sub2;

        if (cond1 + cond2) {
            inside_cnt++;
        }
    }

    cout << inside_cnt;

    return 0;
} // END