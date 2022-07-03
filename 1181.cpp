// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1181, BJ Online Judge
// https://www.acmicpc.net/problem/1181

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const string& a, const string& b) {
    if (a.size() == b.size()) {
        return a < b;
    }
    else {
        return a.size() < b.size();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, i;
    string tmp;
    cin >> n;
    vector<string> vec;
    
    for (i = 0; i < n; ++i) {
        cin >> tmp;

        if (find(vec.begin(), vec.end(), tmp) == vec.end()) {
            vec.push_back(tmp);
        }
    }

    sort(vec.begin(), vec.end(), compare);

    for (i = 0; i < vec.size(); ++i) {
        cout << vec[i] << "\n";
    }

    return 0;
} // END