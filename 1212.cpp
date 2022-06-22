// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1212, BJ Online Judge
// https://www.acmicpc.net/problem/1212

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string oct_num;
	bool zero_bool = false;
	cin >> oct_num;
	vector<string> oct_table = { "000","001","010","011","100","101","110","111" };

	for (string::iterator iter = oct_num.begin(); iter != oct_num.end(); ++iter) {
		int digit = *iter - '0';
		if (iter == oct_num.begin()) {
			if (digit == 0) {
				continue;
			}
			else if (digit == 1) {
				cout << "1";
				zero_bool = true;
				continue;
			}
			else if (digit == 2) {
				cout << "10";
				zero_bool = true;
				continue;
			}
			else if (digit == 3) {
				cout << "11";
				zero_bool = true;
				continue;
			}
			else {
				cout << oct_table[digit];
				if (oct_table[digit] != "000") {
					zero_bool = true;
				}
				continue;
			}
		}
		else {
			cout << oct_table[digit];
			if (oct_table[digit] != "000") {
				zero_bool = true;
			}
			continue;
		}
	}

	if (!zero_bool) {
		cout << "0";
	}

	return 0;
} // END