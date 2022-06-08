// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1016, BJ Online Judge
// https://www.acmicpc.net/problem/1016

#include <iostream>
#include <cmath>
using namespace std;

bool is_not_pow(int n) {
	unsigned long long tmp = 0;

	for (unsigned long long cnt = 2; cnt < unsigned long long(sqrt(n)) + 1; cnt++) {
		if (n % (cnt * cnt) == 0) {
			tmp++;
			break;
		}
	}

	if (tmp == 0) {
		return true;
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	unsigned long long m1, m2, cnt = 0;
	
	cin >> m1 >> m2;

	for (unsigned long long i = m1; i <= m2; ++i) {
		cnt += is_not_pow(i);
	}

	cout << cnt;

	return 0;
} // END