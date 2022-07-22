// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 1934, BJ Online Judge
// https://www.acmicpc.net/problem/1934

#include <iostream>
#include <vector>
using namespace std;

void cpp_init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int gcd(int n1, int n2) {
    int mod = n1 % n2;

    while (mod) {
        n1 = n2;
        n2 = mod;
        mod = n1 % n2;
    }

    return n2;
}

int lcm(int num1, int num2) {
    return (num1 * num2) / gcd(num1, num2);
}

int main() {
    cpp_init();


    int t, num1, num2;
    cin >> t;
    vector<int> res;

    for (int i = 0; i < t; ++i) {
        cin >> num1 >> num2;
        res.push_back(lcm(num1, num2));
    }

    for (int i = 0; i < t; ++i) {
        cout << res[i] << "\n";
    }

    return 0;
} // END