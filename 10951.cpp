// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Mar 3 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 10951, BJ Online Judge
// https://www.acmicpc.net/problem/10951

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0;

	while (1) {
		cin >> a >> b;
		if (cin.eof() == 1) {
			break;
		}
		cout << a + b << "\n";
	}
	// EoF on C++, https://takeknowledge.tistory.com/20

	return 0;
} // END