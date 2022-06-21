// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 3009, BJ Online Judge
// https://www.acmicpc.net/problem/3009

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	map<string, int> x_point;
	map<string, int> y_point;
	string tmp1, tmp2;

	for (int i = 0; i < 3; ++i) {
		cin >> tmp1 >> tmp2;

		if (x_point.find(tmp1) == x_point.end()) {
			x_point.insert({ tmp1, 1 });
		}
		else {
			x_point[tmp1] = 2;
		}

		if (y_point.find(tmp2) == y_point.end()) {
			y_point.insert({ tmp2, 1 });
		}
		else {
			y_point[tmp2] = 2;
		}
	}

	for (auto i : x_point) {
		if (i.second == 1) {
			cout << i.first << " ";
			break;
		}
	}

	for (map<string, int>::iterator j = y_point.begin(); j != y_point.end(); ++j) {
		if (j->second == 1) {
			cout << j->first;
			break;
		}
	}

	return 0;
} // END