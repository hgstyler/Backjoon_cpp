// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 24 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 14681, BJ Online Judge
// https://www.acmicpc.net/problem/14681

#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cin >> x;
	cin >> y;

	if ((x > 0) && (y > 0)) {
		cout << "1";
	}
	else if ((x < 0) && (y < 0)) {
		cout << "3";
	}
	else if (x < 0) {
		cout << "2";
	}
	else {
		cout << "4";
	}

	return 0;
}

// END
