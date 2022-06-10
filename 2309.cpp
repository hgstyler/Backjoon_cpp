// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2309, BJ Online Judge
// https://www.acmicpc.net/problem/2309

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tmp;
	vector<int> samples;

	for (int i = 0; i < 9; ++i) {
		cin >> tmp;
		samples.push_back(tmp);
	}
	sort(samples.begin(), samples.end());
	
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (i == j) {
				continue;
			}
			else {
				if (accumulate(samples.begin(), samples.end(), 0) - samples[i] - samples[j] == 100) {
					for (int k = 0; k < 9; ++k) {
						if (k != i && k != j) {
							cout << samples[k] << "\n";
						}
					}
					return 0;
				}
			}
		}
	}

	return 0;
} // END