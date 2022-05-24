// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyle, Mar 3 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 10818, BJ Online Judge
// https://www.acmicpc.net/problem/10818

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N = 0;
	cin >> N;

	int *numbers = new int[N];

	for (int counter = 0; counter < N; counter++) {
		cin >> numbers[counter];
	}

	cout << *min_element(numbers, numbers + N) << " " << *max_element(numbers, numbers + N);

	// min, max in array variable, https://takeknowledge.tistory.com/22


	return 0;
} // END