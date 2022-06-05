// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10872, BJ Online Judge
// https://www.acmicpc.net/problem/10872

#include <iostream>
using namespace std;

void fact(int n, int& s) {
	if (n > 1) {
		s *= n;
		fact(n - 1, s);
	}
	else {
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, product_sum = 1;
	cin >> n;

	fact(n, product_sum);

	cout << product_sum;

	return 0;
} // END