// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10989, BJ Online Judge
// https://www.acmicpc.net/problem/10989

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, tmp;
	cin >> n;
	vector<int> numbers(10001, 0);

	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		numbers[tmp]++;
	}

	for (int i = 1; i <= 10000; ++i) {
		for (int j = 0; j < numbers[i]; ++j) {
			cout << i << "\n";
		}
	}

	return 0;
} // END