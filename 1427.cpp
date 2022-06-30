// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1427, BJ Online Judge
// https://www.acmicpc.net/problem/1427

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool custom_compare(int i, int j) {
	return j < i;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string n;
	cin >> n;

	sort(n.begin(), n.end(), custom_compare);
	
	cout << n;

	return 0;
} // END