// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 2941, BJ Online Judge
// https://www.acmicpc.net/problem/2941

#include <iostream>
#include <string>
using namespace std;

int dzeql(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 2; cnt++) {
        if (w[cnt] == 'd' && w[cnt + 1] == 'z' && w[cnt + 2] == '=') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0'; w[cnt + 2] = '0';
        }
    }
    
    return chk;
}
   
int lj(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 1; cnt++) {
        if (w[cnt] == 'l' && w[cnt + 1] == 'j') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0';
        }
    }

    return chk;
}

int nj(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 1; cnt++) {
        if (w[cnt] == 'n' && w[cnt + 1] == 'j') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0';
        }
    }

    return chk;
}

int ceql(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 1; cnt++) {
        if (w[cnt] == 'c' && w[cnt + 1] == '=') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0';
        }
    }

    return chk;
}

int chyphen(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 1; cnt++) {
        if (w[cnt] == 'c' && w[cnt + 1] == '-') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0';
        }
    }

    return chk;
}

int dhyphen(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 1; cnt++) {
        if (w[cnt] == 'd' && w[cnt + 1] == '-') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0';
        }
    }

    return chk;
}

int seql(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 1; cnt++) {
        if (w[cnt] == 's' && w[cnt + 1] == '=') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0';
        }
    }

    return chk;
}

int zeql(string &w, int l) {
    int chk = 0;
    for (int cnt = 0; cnt < l - 1; cnt++) {
        if (w[cnt] == 'z' && w[cnt + 1] == '=') {
            chk += 1;
            w[cnt] = '0'; w[cnt + 1] = '0';
        }
    }

    return chk;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string words;
    int words_len, words_cnt = 0;

    cin >> words;
	words_len = words.length();

    words_cnt += dzeql(words, words_len) + ceql(words, words_len) + chyphen(words, words_len) + dhyphen(words, words_len) + seql(words, words_len) + zeql(words, words_len) + lj(words, words_len) + nj(words, words_len);

    while (words.find('0') < words.length()) {
        words.erase(words.find('0'), 1);
    }

    words_cnt += words.length();

    cout << words_cnt;

	return 0;
} // END