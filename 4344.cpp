// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 4344, BJ Online Judge
// https://www.acmicpc.net/problem/4344

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int C, class_num, over_avg_num;
	double sum, avg;
	double class_score[1001] = { 0 };
	cin >> C;
	cout << fixed; cout.precision(3); // set precision https://takeknowledge.tistory.com/13

	for (int cnt1 = 0; cnt1 < C; cnt1++) {
		avg = 0.0, sum = 0.0, over_avg_num = 0;
		cin >> class_num;

		for (int cnt2 = 0; cnt2 < class_num; cnt2++) {
			cin >> class_score[cnt2];
		}

		for (int cnt2 = 0; cnt2 < class_num; cnt2++) {
			sum += class_score[cnt2];
		}

		avg = sum / class_num;

		for (int cnt2 = 0; cnt2 < class_num; cnt2++) {
			if (class_score[cnt2] > avg) {
				over_avg_num++;
			}
		}

		cout << double(over_avg_num) / double(class_num) * 100.0 << "%\n"; // round https://blockdmask.tistory.com/112

	}

	return 0;
} // END
