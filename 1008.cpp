// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 23 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 1008, BJ Online Judge
// https://www.acmicpc.net/problem/1008

#include <iostream>
using namespace std;

int main()
{
	double A, B;
	// size of variable check!

	cin >> A >> B;
	cout << fixed; cout.precision(9);
	// point digit control for cout, https://atomic0x90.github.io/c++/2020/02/10/c++-decimal-place.html
	// cout.fixed is to control digit numbers under point
	// differents types of cout format, https://repilria.tistory.com/243

	cout << A / B;

	return 0;
}

// types of input values, https://dbstndi6316.tistory.com/33
// input 2 values(iostream), https://neos35.tistory.com/5
// input 2 values(stdio.h), https://dojang.io/mod/page/view.php?id=80
