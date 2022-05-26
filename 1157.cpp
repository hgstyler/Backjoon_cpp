// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1157, BJ Online Judge
// https://www.acmicpc.net/problem/1157

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string word; int max_val, sub_cnt = 0;
	cin >> word;

	vector<int> alpha_cnt;
	for (int cnt = 0; cnt < 26; cnt++) {
		alpha_cnt.push_back(0);
	}

	for (int cnt1 = 0; cnt1 < word.length(); cnt1++) {
		for (int cnt2 = 0; cnt2 < 26; cnt2++) {
			if (word[cnt1] == char(cnt2 + 65)) {
				alpha_cnt[cnt2]++;
			}
		}
	}

	for (int cnt1 = 0; cnt1 < word.length(); cnt1++) {
		for (int cnt2 = 0; cnt2 < 26; cnt2++) {
			if (word[cnt1] == char(cnt2 + 97)) {
				alpha_cnt[cnt2]++;
			}
		}
	}

	max_val = *max_element(alpha_cnt.begin(), alpha_cnt.end());

	for (int cnt = 0; cnt < 26; cnt++) {
		if (alpha_cnt[cnt] == max_val) {
			sub_cnt++;
		}
	}

	if (sub_cnt > 1) {
		cout << "?";
	}
	else {
		cout << char(max_element(alpha_cnt.begin(), alpha_cnt.end()) - alpha_cnt.begin() + 65);
	}

	return 0;
} // END