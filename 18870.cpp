// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 18870, BJ Online Judge
// https://www.acmicpc.net/problem/18870

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	/*
	int n, cnt;
	
	cin >> n;
	vector<int> vect(n);

	for (int i = 0; i < n; ++i) {
		cin >> vect[i];
	}

	vector<int> cvect(vect);
	sort(cvect.begin(), cvect.end());

	cvect.erase(unique(cvect.begin(), cvect.end()), cvect.end()); // unique on algorythm header https://sangwoo0727.github.io/c++/Cplus-unique/

	for (int i = 0; i < vect.size(); ++i) {
		vector<int>::iterator iter = lower_bound(cvect.begin(), cvect.end(), vect[i]); // index search https://chanhuiseok.github.io/posts/algo-55/

		cout << iter - cvect.begin() << " ";
	}
	*/

	int n, cnt;

	cin >> n;
	vector<int> vect(n);

	for (int i = 0; i < n; ++i) {
		cin >> vect[i];
	}

	vector<int> cvect(vect);
	sort(cvect.begin(), cvect.end());

	cvect.erase(unique(cvect.begin(), cvect.end()), cvect.end());

	map<int, int> map;
	for (int i = 0; i < cvect.size(); ++i) {
		map[cvect[i]] = i;
	}

	for (int i = 0; i < vect.size(); ++i) {
		cout << map[vect[i]] << " ";
	}

	return 0;
} // END