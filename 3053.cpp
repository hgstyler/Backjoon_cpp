// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 3053, BJ Online Judge
// https://www.acmicpc.net/problem/3053

#include <iostream>
#include <iomanip>
#define PI 3.1415926535897932
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    double r;
    cin >> r;

    cout << fixed << setprecision(6);
    cout << r * r * PI << "\n";
    cout << r * r * 2;
    cout.unsetf(std::ios::fixed);

    return 0;
} // END