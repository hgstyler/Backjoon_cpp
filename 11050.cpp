// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11050, BJ Online Judge
// https://www.acmicpc.net/problem/11050

#include <iostream>
using namespace std;

void cpp_init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int fact(int n) {
	if (n != 0 && n != 1){
		return fact(n - 1) * n;
	}
	else {
		return 1;
	}
}

int main() {
	cpp_init();

	int n, k;
	cin >> n >> k;

	cout << fact(n) / fact(k) / fact(n - k);

	return 0;
} // END