// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2108, BJ Online Judge
// https://www.acmicpc.net/problem/2108

#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	map<double, int> num_frq;
	map<double, int>::iterator pmax_frq;
	vector<double> numbers;

	double sum = 0, mean, median, mode_cnt = 0, mode, min, max, range, tmp;
	int n, mode_sec;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		
		if (num_frq.find(tmp) == num_frq.end()) {
			num_frq[tmp] = 1;
		}
		else {
			num_frq[tmp]++;
		}

		numbers.push_back(tmp);
		sum += tmp;
	}

	sort(numbers.begin(), numbers.end());

	mean = double(sum) / double(n);
	if (mean > -0.5 && mean < 0.5) {
		mean = 0;
	}

	median = numbers[(n + 1) / 2 - 1];

	// pmax_frq = max_element(num_frq.begin(), num_frq.end()); // max_element for map->first

	// max_element for map->second; // https://stackoverflow.com/questions/9370945/finding-the-max-value-in-a-map
	pmax_frq
		= max_element(num_frq.begin(), num_frq.end(), [](const std::pair<double, int>& a, const std::pair<double, int>& b)->bool { return a.second < b.second; });

	for (auto i = num_frq.begin(); i != num_frq.end(); ++i) {
		if (i->second == pmax_frq->second && mode_cnt == 0) {
			mode = i->first;
			mode_cnt++;
		}
		else if (i->second == pmax_frq->second && mode_cnt == 1) {
			mode = i->first;
			break;
		}
	}

	max = *max_element(numbers.begin(), numbers.end());
	min = *min_element(numbers.begin(), numbers.end());
	range = max - min;

	cout << round(mean) << "\n";
	cout << median << "\n";
	cout << mode << "\n";
	cout << range;

	for (auto i = num_frq.begin(); i != num_frq.end(); ++i) {
		cout << "\n" << i->first << " " << i->second;
	}
	cout << "\n" << pmax_frq->first << " " << pmax_frq->second;

	return 0;
} // END