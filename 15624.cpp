// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 15624, BJ Online Judge
// https://www.acmicpc.net/problem/15624

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;	
	vector<int> fibo_remainder;

	const int mod = 1000000007;

	cin >> n;

	fibo_remainder.push_back(0);
	fibo_remainder.push_back(1);

	for (long long i = 2; i <= n; ++i) {
		fibo_remainder.push_back((fibo_remainder[i - 1] + fibo_remainder[i - 2]) % mod);
	}

	cout << fibo_remainder[n];

	return 0;
} // END