// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 28 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 11021, BJ Online Judge
// https://www.acmicpc.net/problem/11021

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t, a, b, loop;
	cin >> t;

	for (int loop = 1; loop < t + 1; loop++) {
		cin >> a >> b;
		cout << "Case #" << loop << ": " << a + b << "\n";
	}

	return 0;
} // END
