// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1018, BJ Online Judge
// https://www.acmicpc.net/problem/1018

#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<string> board;
	set<int> paint_bw;
	set<int> paint_wb;

	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		board.push_back(tmp);
	}

	for (int n_axis = 0; n_axis < n - 8 + 1; ++n_axis) {
		for (int m_axis = 0; m_axis < m - 8 + 1; ++m_axis) {
			int tmp_bw = 0;
			int tmp_wb = 0;
			
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j < 8; ++j) {
					if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
						if (board[i + n_axis][j + m_axis] != 'B') {
							tmp_bw++;
						}
						else {
							tmp_wb++;
						}
					}
					else {
						if (board[i + n_axis][j + m_axis] != 'W') {
							tmp_bw++;
						}
						else {
							tmp_wb++;
						}
					}
				}
			}

			paint_bw.insert(tmp_bw);
			paint_wb.insert(tmp_wb);
		}
	}

	if (*paint_bw.begin() < *paint_wb.begin()) {
		cout << *paint_bw.begin();
	}
	else {
		cout << *paint_wb.begin();
	}

	return 0;
} // END