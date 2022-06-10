// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1759, BJ Online Judge
// https://www.acmicpc.net/problem/1759

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void gen_passwd(int &leng, int &cha, vector<int> &v) {
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int l, c;
	cin >> l >> c;
	vector<char> samples(c);
	vector<char> passwd;

	for (int i = 0; i < c; ++i) {
		cin >> samples[i];
	}
	sort(samples.begin(), samples.end());

	for (int i = 0; i < c; ++i) {
		cout << samples[i] << " ";
	}

	for (int i = 0; i < l; ++i) {
		passwd.push_back(samples[i]);

	}

	return 0;
} // END