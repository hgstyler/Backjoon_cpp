// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11478, BJ Online Judge
// https://www.acmicpc.net/problem/11478

#include <iostream>
#include <string>
#include <set>
// unordered vs. _ https://jjeongil.tistory.com/1047 https://minecode.tistory.com/43
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    set<string> string_set;

    for (int i = 0; i < s.size(); ++i) {
        for (int j = 1; j < s.size() - i + 1; ++j) {
            string_set.insert(s.substr(i, j)); // substr, substring https://webclub.tistory.com/20
        }
    }

    cout << string_set.size();

    return 0;
} // END