// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11653, BJ Online Judge
// https://www.acmicpc.net/problem/11653

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, i = 2;
	cin >> n;

	while (n != 1) {
		if (n % i == 0) {
			cout << i << "\n";
			n /= i;
			if (n % i != 0) {
				i++;
			}
		}
		else {
			i++;
		}
	}

	return 0;
} // END