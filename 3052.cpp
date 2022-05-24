// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 3052, BJ Online Judge
// https://www.acmicpc.net/problem/3052

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int numbers[10];
	int main_cnt = 0;

	for (int cnt1 = 0; cnt1 < 10; cnt1++) {
		cin >> numbers[cnt1];
		numbers[cnt1] %= 42;
	}

	for (int cnt1 = 0; cnt1 < 10; cnt1++) {
		int dup_cnt = 0;
		for (int cnt2 = cnt1 + 1; cnt2 < 10; cnt2++) {
			if (numbers[cnt1] == numbers[cnt2]) {
				dup_cnt++;
			}
		}
		if (dup_cnt == 0) {
			main_cnt++;
		}
	}

	cout << main_cnt;

	return 0;
} // END
