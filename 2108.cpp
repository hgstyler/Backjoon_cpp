// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2108, BJ Online Judge
// https://www.acmicpc.net/problem/2108

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> numbers(8001, 0);

	int n, ssum = 0, mmin = 5000, mmax = -5000, rrange, mmode, tmp;
	double mmean;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		numbers[tmp + 4000]++;
		if (tmp <= mmin) {
			mmin = tmp;
		}
		if (tmp >= mmax) {
			mmax = tmp;
		}
		ssum += tmp;
	}
	tmp = numbers[0];
	for (int i = 0; i < 8001; ++i) {
		if (numbers[i] >= tmp) {
			mmode = i - 4000;
		}
	}

	mmean = ssum / n;
	rrange = mmax - mmin;

	cout << mmean << "\n";
	cout << mmean << "\n";
	cout << mmode << "\n";
	cout << rrange << "\n";


	return 0;
} // END