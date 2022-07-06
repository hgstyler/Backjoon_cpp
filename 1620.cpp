// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1620, BJ Online Judge
// https://www.acmicpc.net/problem/1620

#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<string, string> poke;
    vector<string> ans;
    string tmp1, tmp2;

    for (int i = 1; i <= n; ++i) {
        cin >> tmp1;
        tmp2 = to_string(i);
        poke[tmp1] = tmp2;
        poke[tmp2] = tmp1;
    }

    for (int i = 0; i < m; ++i) {
        cin >> tmp1;
        ans.push_back(poke[tmp1]+"\n");
    }

    for (int i = 0; i < m; ++i) {
        cout << ans[i];
    }

    return 0;
} // END