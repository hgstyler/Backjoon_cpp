// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1065, BJ Online Judge
// https://www.acmicpc.net/problem/1065

#include <iostream>
#include <vector>
using namespace std;

void app() {
	int N, tmp, d1, d2, sub_cnt, num_cnt = 0;
	cin >> N;

	vector<int> N_vec;
	N_vec.resize(3);

	if (N < 100) {
		num_cnt = N;
	}
	else if (N <= 101) {
		num_cnt = 99;
	}
	else if (N != 1000) {
		num_cnt = 99;
		for (int cnt = 102; cnt < N + 1; cnt++) {
			sub_cnt = 0;
			
			for (int cnt1 = cnt; cnt1 > 0; cnt1 /= 10) {
				N_vec[sub_cnt] = cnt1 % 10;
				sub_cnt++;
			}

			d1 = N_vec[0] - N_vec[1];
			d2 = N_vec[1] - N_vec[2];
			
			if (d1 == d2) {
				num_cnt++;
			}
		}
	}
	else {
		num_cnt = 144;
	}

	cout << num_cnt;

}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	app();

	return 0;
} // END