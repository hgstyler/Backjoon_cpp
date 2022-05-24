// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 28 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 15552, BJ Online Judge
// https://www.acmicpc.net/problem/15552

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	// quick loading of 'cin' using 'for', https://www.acmicpc.net/problem/15552, https://starrykss.tistory.com/750

	int t, a, b;
	cin >> t;

	for (int loop = 1; loop < t + 1; loop++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
} // END
