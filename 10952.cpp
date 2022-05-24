// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Mar 3 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 10952, BJ Online Judge
// https://www.acmicpc.net/problem/10952

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 1, b = 1;

	while (!((a == 0) && (b == 0))) {
		cin >> a >> b;
		if ((a == 0) && (b == 0)) {
			return 0;
		}
		cout << a + b << "\n";
	}

	return 0;
} // END