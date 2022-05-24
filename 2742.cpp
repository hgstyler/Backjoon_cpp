// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 28 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2742, BJ Online Judge
// https://www.acmicpc.net/problem/2742

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	// quick loading of 'cin' using 'for', https://www.acmicpc.net/problem/15552, https://starrykss.tistory.com/750

	int n, loop;
	cin >> n;

	for (int loop = n; loop > 0; loop--) {
		cout << loop << '\n';
	}

	return 0;
} // END
