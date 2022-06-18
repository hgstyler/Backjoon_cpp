// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2747, BJ Online Judge
// https://www.acmicpc.net/problem/2747

#include <iostream>
#include <vector>
using namespace std;

void fibo(int n, vector<int> &v) {
	v.push_back(0);
	v.push_back(1);

	if (n != 0 && n != 1) {
		for (int i = 2; i <= n; ++i) {
			v.push_back(v[i - 2] + v[i - 1]);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> fibo_nums;

	fibo(n, fibo_nums);

	cout << fibo_nums[n];
	
	return 0;
} // END