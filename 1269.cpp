// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1269, BJ Online Judge
// https://www.acmicpc.net/problem/1269

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b, tmp;
    cin >> a >> b;

    set<int> set_a;
    set<int> set_b;
    set<int> set_a_b;
    set<int> set_b_a;

    for (int i = 0; i < a; ++i) {
        cin >> tmp;
        set_a.insert(tmp);
    }

    for (int i = 0; i < b; ++i) {
        cin >> tmp;
        set_b.insert(tmp);
    }

    // set_difference https://yongho1037.tistory.com/470 , https://www.techiedelight.com/ko/get-difference-between-two-vectors-in-cpp/
    set_difference(set_a.begin(), set_a.end(), set_b.begin(), set_b.end(), inserter(set_a_b, set_a_b.begin()));
    set_difference(set_b.begin(), set_b.end(), set_a.begin(), set_a.end(), inserter(set_b_a, set_b_a.begin()));

    cout << set_a_b.size() + set_b_a.size();

    return 0;
} // END