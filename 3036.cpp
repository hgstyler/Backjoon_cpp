// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 3036, BJ Online Judge
// https://www.acmicpc.net/problem/3036

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

int main() {
    cpp_init();

    int n, tmp, ring1;
    vector<int> rings;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        rings.push_back(tmp);
    }
    
    ring1 = rings[0];

    for (int i = 1; i < n; ++i) {
        cout << ring1 / gcd(ring1, rings[i]) << "/" << rings[i] / gcd(ring1, rings[i]) << "\n";
    }
    
    return 0;
} // END