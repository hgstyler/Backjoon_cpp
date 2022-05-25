// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1316, BJ Online Judge
// https://www.acmicpc.net/problem/1316

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, group_word_chk = 0;
	vector<string> words;

	cin >> n;
	words.resize(n);
	
	for (int cnt1 = 0; cnt1 < n; cnt1++) {
		cin >> words[cnt1];
	}

	for (int cnt1 = 0; cnt1 < n; cnt1++) {
		if (words[cnt1].length() < 3 && words[cnt1].length() > 0) {
			group_word_chk++;
		}
		else {
			bool flag = true;
			for (int cnt2 = 0; cnt2 < words[cnt1].length(); cnt2++) {
				for (int cnt3 = 0; cnt3 < cnt2; cnt3++) {
					if (words[cnt1][cnt2] != words[cnt1][cnt2 - 1] && words[cnt1][cnt2] == words[cnt1][cnt3]) {
						flag = false;
						break;
					}
				}
			}

			if (flag) {
				group_word_chk++;
			}
		}
	}

	cout << group_word_chk;

	return 0;
} // END