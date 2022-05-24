// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 24 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2753, BJ Online Judge
// https://www.acmicpc.net/problem/2753

#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 00)) {
		cout << "1";
	}
	else {
		cout << "0";
	}

	return 0;
}

// operators in C++, https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90

// END
