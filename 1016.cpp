// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1016, BJ Online Judge
// https://www.acmicpc.net/problem/1016

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long min_value, max_value, sth_integer = 0, powered_number = 0, cnt = 0;
	vector<bool> none_sqrt_numbers(1000001, false);

	cin >> min_value >> max_value;

	long long last_sqrted_number = ceil(sqrt(double(max_value)));
	for (long long i = 2; i <= last_sqrted_number; ++i) {
		powered_number = (long long)pow(i, 2);
		sth_integer = ceil(double(min_value) / double(powered_number)) * powered_number;

		if (sth_integer > max_value) { // checking an useless loop
			continue;
		}

		for (sth_integer; sth_integer <= max_value; sth_integer += powered_number) {
			none_sqrt_numbers[sth_integer - min_value] = true; // true means 'can be divided by powered number'
		}
	}

	for (long long i = 0; i <= max_value - min_value; i++) {
		if (!none_sqrt_numbers[i]) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
} // END


// Type 2. overtime case
/*
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

bool is_prime(long long n) {
	long long j = sqrt(n);

	for (long long i = 2; i < j + 1; i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long min_value, max_value, tmp;
	int main_cnt = 0, sub_cnt = 0;
	set<long long> numbers;

	cin >> min_value >> max_value;

	for (long long i = 2; pow(i, 2) < max_value; ++i) {
		if (is_prime(i)) {
			numbers.insert(pow(i, 2));
		}
	}

	for (long long i = min_value; i <= max_value + 1; ++i) {
		sub_cnt = 0;
		
		for (set<long long>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
			if (i % *iter == 0) {
				sub_cnt++; 
			}
		}
		if (sub_cnt == 0) {
			main_cnt++;
		}
		
	}

	cout << main_cnt;

	return 0;
} // END
*/
