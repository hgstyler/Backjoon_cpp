// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1152, BJ Online Judge
// https://www.acmicpc.net/problem/1152

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    string sentence;
    vector<string> words;

    getline(cin, sentence);
    stringstream ss(sentence);

    for (string s; ss >> s;)
        words.push_back(s);

    cout << words.size();

	return 0;
} // END