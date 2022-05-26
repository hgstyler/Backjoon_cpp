// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2675, BJ Online Judge
// https://www.acmicpc.net/problem/2675

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t,r; string s;
	cin >> t;

	for (int cnt0 = 0; cnt0 < t; cnt0++) {
		cin >> r >> s;
		for (int cnt1 = 0; cnt1 < size(s); cnt1++) {
			for (int cnt2 = 0; cnt2 < r; cnt2++) {
				cout << s[cnt1];
			}
		}
		cout << "\n";
	}

	return 0;
} // END