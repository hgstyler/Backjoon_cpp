// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10826, BJ Online Judge
// https://www.acmicpc.net/problem/10826

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

string string_add(string s1, string s2)
{
	string s;
	int sub_sum;
	vector<int> ans, num1, num2;

	num1.push_back(0);
	num2.push_back(0);

	for (int i = 0; i < s1.size() - s2.size(); ++i) {
		num2.push_back(0);
	}

	for (int i = 0; i < s1.size(); ++i) {
		num1.push_back(s1[i] - '0');
	}

	for (int i = 0; i < s2.size(); ++i) {
		num2.push_back(s2[i] - '0');
	}

	for (int i = s1.size(); i > 0; --i)	{
		sub_sum = num1[i] + num2[i];
		if (sub_sum >= 10)
		{
			num1[i - 1]++;
			sub_sum -= 10;
		}
		ans.push_back(sub_sum);
	}

	if (num1.front() != 0) {
		s.push_back('1');
	}

	for (int i = ans.size() - 1; i >= 0; i--) {
		s.push_back(ans[i] + 48);
	}

	return s;
}

int main()
{
	int n;
	cin >> n;
	vector<string> fibo(10001);

	fibo[0] = '0';
	fibo[1] = '1';

	for (int i = 2; i <= n; i++)
	{
		fibo[i] = string_add(fibo[i - 1], fibo[i - 2]);
	}

	cout << fibo[n];

}

// END