// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1764, BJ Online Judge
// https://www.acmicpc.net/problem/1764

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;

    string tmp;
    cin >> n >> m;
    map<string, int> people;
    vector<string> dbj_people;

    for (int i = 0; i < n + m; ++i) {
        cin >> tmp;
        people[tmp]++;
        if (people[tmp] > 1) {
            dbj_people.push_back(tmp);
        }
    }

    stable_sort(dbj_people.begin(), dbj_people.end());

    cout << dbj_people.size() << "\n";
    for (auto i : dbj_people) {
        cout << i << "\n";
    }

    return 0;
} // END