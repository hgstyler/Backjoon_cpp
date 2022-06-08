// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 14425, BJ Online Judge
// https://www.acmicpc.net/problem/14425

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, s = 0;
	string tmp;
	set<string> sample_list;

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		sample_list.insert(tmp);
	}

	for (int i = 0; i < m; ++i) {
		cin >> tmp;

		if (sample_list.find(tmp) != sample_list.end()) {
			s++;
		}
	}

	cout << s;

	return 0;
} // END