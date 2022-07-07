// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10816, BJ Online Judge
// https://www.acmicpc.net/problem/10816

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, tmp;
    cin >> n;
    map<int, int> num_cards;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (!num_cards[tmp]) {
            num_cards[tmp] = 1;
        }
        else {
            num_cards[tmp]++;
        }
    }

    cin >> m;
    vector<int> how_many;
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        how_many.push_back(num_cards[tmp]);
    }

    for (int i = 0; i < how_many.size(); ++i) {
        cout << how_many[i] << " ";
    }

    return 0;
} // END