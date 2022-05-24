// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2577, BJ Online Judge
// https://www.acmicpc.net/problem/2577

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	// type 1: / and %
	int a, b, c, result_mul;
	int numbers_cnt[10] = { 0 };

	cin >> a;
	cin >> b;
	cin >> c;
	result_mul = a * b * c;

	for (int cnt1 = result_mul; cnt1 > 0; cnt1 /= 10) {
		numbers_cnt[cnt1 % 10]++;
	}

	for (int cnt2 = 0; cnt2 < 10; cnt2++) {
		cout << numbers_cnt[cnt2] << "\n";
	}

	// type 2: string conversion
	int a_s, b_s, c_s, result_mul_s;
	int numbers_cnt_s[10] = { 0 };

	cin >> a_s >> b_s >> c_s;
	result_mul_s = a_s * b_s * c_s;
	string s = to_string(result_mul_s);

	for (char ch : s) {
		numbers_cnt_s[ch - '0']++;
	}

	for (int cnt_s : numbers_cnt_s) {
		cout << cnt_s << "\n";
	}

	return 0;
} // END
