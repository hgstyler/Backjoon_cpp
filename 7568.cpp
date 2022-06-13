// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 7568, BJ Online Judge
// https://www.acmicpc.net/problem/7568

#include<iostream>
#include<vector>
using namespace std;

class People {
public:
	int weight;
	int height;
	int ranking;
	People(int w, int h, int r);
	~People();
};

People::People(int w, int h, int r)
{
	weight = w;
	height = h;
	ranking = r;
}

People::~People() {}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, tmp1, tmp2;
	cin >> n;
	vector<People> vec;

	for (int i = 0; i < n; ++i) {
		cin >> tmp1 >> tmp2;
		People p(tmp1, tmp2, 1);
		vec.push_back(p);
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (vec[i].height < vec[j].height && vec[i].weight < vec[j].weight) {
				vec[i].ranking++;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		cout << vec[i].ranking << " ";
	}

	return 0;
} // END