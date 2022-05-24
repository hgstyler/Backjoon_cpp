// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 24 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2480, BJ Online Judge
// https://www.acmicpc.net/problem/2480

#include <iostream>
#include <algorithm>
using namespace std;

// max, min, algorithm header, https://notepad96.tistory.com/entry/C-min-max-%ED%95%A8%EC%88%98

int main()
{
	int dice1, dice2, dice3, prize;
	cin >> dice1 >> dice2 >> dice3;

	if ((dice1 == dice2) && (dice2 == dice3)) {
		prize = 10000 + dice1 * 1000;
	}
	else if (dice1 == dice2) {
		prize = 1000 + dice1 * 100;
	}
	else if (dice2 == dice3) {
		prize = 1000 + dice2 * 100;
	}
	else if (dice1 == dice3) {
		prize = 1000 + dice1 * 100;
	}
	else {
		prize = max({ dice1, dice2, dice3 }) * 100;
	}

	cout << prize;

	return 0;
}

// END
