// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 8958, BJ Online Judge
// https://www.acmicpc.net/problem/8958

#include <iostream>
#include <cstring> // string headers comparision. https://jhnyang.tistory.com/99
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	char ox_sheet[80];

	for (int cnt1 = 0; cnt1 < N; cnt1++) {
		cin >> ox_sheet;
		int sum = 0;
		int sub_cnt = 1;
		
		for (int cnt2 = 0; cnt2 < strlen(ox_sheet); cnt2++) {
			if (ox_sheet[cnt2] == 'O') {
				sum += sub_cnt;
				sub_cnt++;
			}
			else {
				sub_cnt = 1;
			}
		}

		cout << sum << "\n";
	}

	return 0;
} // END
