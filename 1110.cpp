// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Mar 3 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 1110, BJ Online Judge
// https://www.acmicpc.net/problem/1110

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N_origin = 0;
	int counter = 0;
	
	cin >> N_origin;
	int N = N_origin;

	do {
		N = (N % 10) * 10 + (N / 10 + N % 10) % 10;
		counter++;
	} while (N != N_origin);

	cout << counter;

	return 0;
} // END