// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 11729, BJ Online Judge
// https://www.acmicpc.net/problem/11729

#include <iostream>
#include <vector>
using namespace std;

vector<int> v1;
vector<int> v2;
vector<int> v3;
int n, k;

void pop_push(vector<int> vv, vector<int> ww) {
	int tmp;

	tmp = vv.pop_back();
	ww.push_back(tmp);
}

void move() {
	if (v3.size() == n) {

	}
	else if (v1[v1.index(end())] )


	return;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> n;

	int i = n;
	while (i--) {
		v1.push_back(i + 1);
	}
	k = 0;

	move();

	for (int cnt = 0; cnt < n; cnt++) {
		cout << v1[cnt] << " ";
	}

	return 0;
} // END