// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 28 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 11022, BJ Online Judge
// https://www.acmicpc.net/problem/11022

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t, a, b;
	cin >> t;

	for (int loop = 1; loop < t + 1; loop++) {
		cin >> a >> b;
		cout << "Case #" << loop << ": " << a << " + " << b << " = " << a + b << "\n";
		// printf("Case #%d: %d + %d = %d\n", loop, a, b, a + b);
	}

	return 0;
} // END
