// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Mar 2 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 10871, BJ Online Judge
// https://www.acmicpc.net/problem/10871

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0, x = 0;
	int number[10000];

	cin >> n >> x;

	for (int loop_input = 0; loop_input < n; loop_input++) {
		cin >> number[loop_input];
	}

	for (int loop_output = 0; loop_output < n; loop_output++) {
		if (number[loop_output] < x) {
			cout << number[loop_output] << " ";
		}
	}

	return 0;
} // END