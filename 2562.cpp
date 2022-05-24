// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2562, BJ Online Judge
// https://www.acmicpc.net/problem/2562

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int numbers[9];
	for (int cnt1 = 0; cnt1 < 9; cnt1++) {
		cin >> numbers[cnt1];
	}

	int max_number = 0, max_index = 0;
	for (int cnt2 = 0; cnt2 < 9; cnt2++) {
		if (numbers[cnt2] > max_number) {
			max_number = numbers[cnt2];
			max_index = cnt2 + 1;
		}
	}

	cout << max_number << "\n";
	cout << max_index;

	return 0;
} // END
