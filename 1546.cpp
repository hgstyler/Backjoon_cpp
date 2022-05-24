// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 1546, BJ Online Judge
// https://www.acmicpc.net/problem/1546

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	double max_value, sum = 0.0;
	cin >> N;

	double *scores = new double[N];

	for (int cnt = 0; cnt < N; cnt++) {
		cin >> scores[cnt];
	}

	max_value = *max_element(scores, scores + N);

	for (int cnt = 0; cnt < N; cnt++) {
		scores[cnt] = scores[cnt] / max_value * 100.00;
		sum += scores[cnt];
	}

	cout << sum / N;

	delete[] scores;

	return 0;
} // END
