// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 15596, BJ Online Judge
// https://www.acmicpc.net/problem/15596

#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int>& a) {
	long long ans = 0;

	for (int cnt = 0; cnt < a.size(); cnt++) {
		ans += a[cnt];
	}

	return ans;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	return 0;
} // END