// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 24 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2525, BJ Online Judge
// https://www.acmicpc.net/problem/2525

#include <iostream>
using namespace std;

int main()
{
	int hh, mm, cooking_time, hh_cook, mm_cook, hh_end, mm_end;
	cin >> hh >> mm;
	cin >> cooking_time;

	hh_cook = cooking_time / 60;
	mm_cook = cooking_time % 60;

	hh_end = hh + hh_cook;
	mm_end = mm + mm_cook;

	if (mm_end >= 60) {
		hh_end = hh_end + int(mm_end / 60);
		mm_end = mm_end % 60;
	}
	
	if (hh_end >= 24) {
		hh_end = hh_end - 24;
	}

	cout << hh_end << " " << mm_end;

	return 0;
}

// END
