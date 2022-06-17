// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2749, BJ Online Judge
// https://www.acmicpc.net/problem/2749

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;
	int tmp;
	vector<int> fibo;

	const int mod = 1000000;
	const int p = mod / 10 * 15;

	cin >> n;

	fibo.push_back(0);
	fibo.push_back(1);

	for (int i = 2; i < p; ++i) {
		tmp = fibo[i - 1] + fibo[i - 2];
		tmp %= mod;
		fibo.push_back(tmp);
	}

	cout << fibo[n % p];

	return 0;
} // END