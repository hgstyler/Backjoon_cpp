// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11729, BJ Online Judge
// https://www.acmicpc.net/problem/11729

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void moving(string from, string to, int& k, vector<string>& vv) {
	k++;
	vv[0] = to_string(k);
	vv.push_back(from + " " + to);
}

void hanoi(int n, string from, string to, string via, int& k, vector<string>& vv) {
	if (n == 1) {
		moving(from, to, k, vv);
	}
	else {
		hanoi(n - 1, from, via, to, k, vv);
		moving(from, to, k, vv);
		hanoi(n - 1, via, to, from, k, vv);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;

	vector<string> history;
	int k = 0;

	history.push_back(to_string(k));
	hanoi(num, "1", "3", "2", k, history);
	
	for (int i = 0; i < history.size(); i++) {
		cout << history[i] << "\n";
	}

	return 0;
} // END