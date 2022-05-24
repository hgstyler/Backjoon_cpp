// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 24 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2884, BJ Online Judge
// https://www.acmicpc.net/problem/2884

#include <iostream>
using namespace std;

int main()
{
	int hh, mm, hh_alarm, mm_alarm;
	cin >> hh >> mm;

	if ((hh == 0) && (mm < 45)) {
		hh_alarm = 23;
		mm_alarm = 60 - (45 - mm);
	}
	else if (mm < 45) {
		hh_alarm = hh - 1;
		mm_alarm = 60 - (45 - mm);
	}
	else {
		hh_alarm = hh;
		mm_alarm = mm - 45;
	}

	cout << hh_alarm << " " << mm_alarm;

	return 0;
}

// END
