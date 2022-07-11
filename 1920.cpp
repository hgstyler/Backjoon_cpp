// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1920, BJ Online Judge
// https://www.acmicpc.net/problem/1920

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    long long tmp;
    map<long long, int> samples;
    vector<int> results;
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        samples[tmp] = 1;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (samples[tmp]) {
            results.push_back(1);
        }
        else {
            results.push_back(0);
        }
    }

    for (int i = 0; i < results.size(); ++i) {
        cout << results[i] << "\n";
    }

    return 0;
} // END