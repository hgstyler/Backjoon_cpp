// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10814, BJ Online Judge
// https://www.acmicpc.net/problem/10814

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, string>> members;
    pair<int, string> person;

    for (int i = 0; i < n; ++i) {
        cin >> person.first >> person.second;
        members.push_back(person);
    }

    stable_sort(members.begin(), members.end(), compare);
    
    for (int i = 0; i < members.size(); ++i) {
        cout << members[i].first << " " << members[i].second << "\n";
    }

    return 0;
} // END