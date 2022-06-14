// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2798, BJ Online Judge
// https://www.acmicpc.net/problem/2798

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int> blackjack(n);
	set<int> sum_jack;

	for (int i = 0; i < n; ++i) {
		cin >> blackjack[i];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j) {
				continue;
			}
			for (int k = 0; k < n; ++k) {
				if (k == i || k == j) {
					continue;
				}
				else {
					if (blackjack[i] + blackjack[j] + blackjack[k] > m) {
						continue;
					}
					else {
						sum_jack.insert(blackjack[i] + blackjack[j] + blackjack[k]);
					}
				}
			}
		}
	}

	cout << *(--sum_jack.end());

	return 0;
} // END