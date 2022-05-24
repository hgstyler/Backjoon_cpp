// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 25 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2739, BJ Online Judge
// https://www.acmicpc.net/problem/2739

#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int a = 1; a < 10; a++) {
	cout << N << " * " << a << " = " << N * a << endl;
	}
	// basic of 'for', https://boycoding.tistory.com/190

	return 0;
} // END
