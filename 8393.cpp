// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 28 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 8393, BJ Online Judge
// https://www.acmicpc.net/problem/8393

#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;

	cin >> n;

	for (int loop = 1; loop < n + 1; loop++) {
		sum = sum + loop;
	}

	cout << sum << endl;

	return 0;
} // END
