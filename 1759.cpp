// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1759, BJ Online Judge
// https://www.acmicpc.net/problem/1759

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int l, c;
vector<char> vec;
vector<bool> is_pw(15);

void gen(int jj, string s) {
	if (jj == l) {
		int cons = 0;
		int vows = 0;

		for (int i = 0; i < l; ++i) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
				vows++;
				continue;
			}
			else {
				cons++;
			}
		}

		if (cons >= 2 && vows >= 1) {
			cout << s << "\n";
		}
		return;
	}

	for (int i = 0; i < c; ++i) {
		if (!is_pw[i]) {
			if (!s.empty()) {
				if (s.back() > vec[i]) {
					continue;
				}
			}

			is_pw[i] = true;

			s.push_back(vec[i]);
			gen(jj + 1, s);

			s.pop_back();
			is_pw[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> l >> c;
	for (int i = 0; i < c; ++i) {
		char c;
		cin >> c;
		vec.push_back(c);
	}

	sort(vec.begin(), vec.end());

	gen(0, "");

	return 0;
}

// END