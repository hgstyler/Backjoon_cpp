// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 28 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2438, BJ Online Judge
// https://www.acmicpc.net/problem/2438

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int loop1 = 1; loop1 < n + 1; loop1++) {
		for (int loop2 = 1; loop2 < loop1 + 1; loop2++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
} // END
