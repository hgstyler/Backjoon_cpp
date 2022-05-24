// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 23 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 10430, BJ Online Judge
// https://www.acmicpc.net/problem/10430

#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	return 0;
}
