// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2751, BJ Online Judge
// https://www.acmicpc.net/problem/2751

#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, tmp;
	cin >> n;
	set<int> numbers;

	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		numbers.insert(tmp);
	}

	for (set<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
		cout << *iter << "\n";
	}

	return 0;
} // END