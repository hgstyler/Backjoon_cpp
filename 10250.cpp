// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10250, BJ Online Judge
// https://www.acmicpc.net/problem/10250

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t, h, w, n, room_h, room_w;
	
	cin >> t;
	
	for (int cnt1 = 0; cnt1 < t; cnt1++) {
		cin >> h >> w >> n;
		
		room_h = n % h;
		room_w = n / h;
		
		if (room_h > 0) {
			room_w++;
		}
		else {
			room_h = h;
		}

		cout << room_h * 100 + room_w << "\n";
	}

	return 0;
} // END