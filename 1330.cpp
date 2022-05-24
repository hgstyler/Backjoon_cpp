// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 24 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 1330, BJ Online Judge
// https://www.acmicpc.net/problem/1330

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a > b) {
		cout << ">";
	}
	else if (a < b) {
		cout << "<";
	}
	else {
		cout << "==";
	}

	// basic for if - else if - else, https://inpages.tistory.com/120

	return 0;
}

// END
