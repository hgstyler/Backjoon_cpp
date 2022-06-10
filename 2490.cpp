// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2490, BJ Online Judge
// https://www.acmicpc.net/problem/2490

#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c, d, sum_atod;

	for (int i = 0; i < 3; ++i) {
		cin >> a >> b >> c >> d;
		sum_atod = a + b + c + d;
		if (sum_atod == 1) {
			cout << 'C';
		}
		else if (sum_atod == 2) {
			cout << 'B';
		}
		else if (sum_atod == 3) {
			cout << 'A';
		}
		else if (sum_atod == 4) {
			cout << 'E';
		}
		else {
			cout << 'D';
		}
		cout << "\n";
	}

	return 0;
} // END