// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11720, BJ Online Judge
// https://www.acmicpc.net/problem/11720

#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num_cnt, sum = 0;
	cin >> num_cnt;
	string s; cin >> s;

	for (int cnt = 0; cnt < num_cnt; cnt++) {
		sum += s[cnt] - 48;
	}

	cout << sum;

	return 0;
} // END