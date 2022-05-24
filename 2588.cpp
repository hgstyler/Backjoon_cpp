// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by Henry, Feb 23 2022
// Dev. Language: C++
// * ** * ** *** ** * ** *

// Question 2588, BJ Online Judge
// https://www.acmicpc.net/problem/2588

#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;

	int multi_one = A * (B % 10);
	int multi_ten = A * (((B - B % 10) % 100) / 10);
	int multi_hund = A * (B / 100);
	int multi_value = A * B;

	cout << multi_one << endl;
	cout << multi_ten << endl;
	cout << multi_hund << endl;
	cout << multi_value << endl;

	return 0;
}
