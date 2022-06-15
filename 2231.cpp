// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2231, BJ Online Judge
// https://www.acmicpc.net/problem/2231

#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, i, sub_sum;
	set<int> m_set;
	cin >> n;
	m = n - 1;

	while (m) {
		sub_sum = m;
		i = m;

		while (i) {
			sub_sum += i % 10;
			i /= 10;
		}

		if (sub_sum == n) {
			m_set.insert(m);
		}

		m--;
	}

	if (m_set.size() == 0) {
		cout << "0";
	}
	else {
		cout << *m_set.begin();
	}

	return 0;
} // END