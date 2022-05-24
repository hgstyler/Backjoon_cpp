// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 24 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 9498, BJ Online Judge
// https://www.acmicpc.net/problem/9498

#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;

	if ((score <= 100) && (score >= 90)) {
		cout << "A";
	}
	else if ((score <= 89) && (score >= 80)) {
		cout << "B";
	}
	else if ((score <= 79) && (score >= 70)) {
		cout << "C";
	}
	else if ((score <= 69) && (score >= 60)) {
		cout << "D";
	}
	else {
		cout << "F";
	}

	return 0;
}

// END
