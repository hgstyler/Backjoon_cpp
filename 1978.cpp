// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1978, BJ Online Judge
// https://www.acmicpc.net/problem/1978

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int n) {
	if (n == 1) {
		return false;
	}

	else {
		for (int cnt = 2; cnt < int(sqrt(n)) + 1; cnt++) {
			if (n % cnt == 0) {
				return false;
				break;
			}
		}

		return true;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, prime_counter = 0;
	vector<int> numbers;

	cin >> n;
	numbers.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
		prime_counter += is_prime(numbers[i]);
	}

	cout << prime_counter;

	return 0;
} // END