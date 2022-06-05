// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1436, BJ Online Judge
// https://www.acmicpc.net/problem/1436

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, how_many_666s = 0, i = 1;
	string number;

	cin >> n;

	while (how_many_666s <= 10000) {
		number = to_string(i);
		
		if (number.size() >= 3) {
			for (string::reverse_iterator riter = number.rbegin(); riter + 2 < number.rend(); riter++) {
				if (*riter == 54 && *(riter + 1) == 54 && *(riter + 2) == 54) {
					how_many_666s++;
					break;
				}
			}
		}

		if (how_many_666s == n) {
			cout << i;
			break;
		}

		i++;
	}

	return 0;
} // END