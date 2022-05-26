// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2908, BJ Online Judge
// https://www.acmicpc.net/problem/2908

#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	if (stoi(a) > stoi(b)) {
		cout << a;
	}
	else if (stoi(a) < stoi(b)) {
		cout << b;
	}

	return 0;
} // END