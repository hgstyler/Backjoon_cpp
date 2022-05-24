// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 4673, BJ Online Judge
// https://www.acmicpc.net/problem/4673

#include <iostream>
#include <vector>
using namespace std;

void app() {
	vector<int> all_numbers;
	int sub_sum, sub_num;

	for (int cnt = 1; cnt < 10001; cnt++) {
		all_numbers.push_back(1);
	}

	for (int cnt = 1; cnt < 10001; cnt++) {
		sub_num = cnt;
		sub_sum = cnt;
		while (sub_num > 0) {
			sub_sum += sub_num % 10;
			sub_num /= 10;
		}
		if (sub_sum <= 10000) {
			all_numbers[sub_sum] = 0;
		}
	}

	for (int cnt = 1; cnt < 10001; cnt++) {
		if (all_numbers[cnt] == 1) {
			cout << cnt << "\n";
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	app();

	return 0;
} // END