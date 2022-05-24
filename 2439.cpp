// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Feb 28 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2439, BJ Online Judge
// https://www.acmicpc.net/problem/2439

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int loop = 1; loop < n + 1; loop++) {
		
		
		// ' ' Loop
		for (int loop_space = n - loop; loop_space > 0; loop_space--) {
			cout << " ";
		}

		// '*' Loop
		for (int loop_star = 0; loop_star < loop; loop_star++) {
			cout << "*";
		}

		// line change
		cout << "\n";
	}

	return 0;
} // END

