// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1037, BJ Online Judge
// https://www.acmicpc.net/problem/1037

#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, tmp, res = 1;
    cin >> n;
    set<int> num_lst;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        num_lst.insert(tmp);
    }

    set<int>::iterator iter;
    iter = num_lst.begin();
    res *= *iter;
    iter = num_lst.end();
    iter--;
    res *= *iter;

    cout << res;

    return 0;
} // END