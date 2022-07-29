// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 9375, BJ Online Judge
// https://www.acmicpc.net/problem/9375

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

void cpp_init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    cpp_init();

    int n, nn, cnt;
    string s1, s2;
    cin >> n;
    map<string, int> fashion_item;
    vector<int> res;
    
    while (n--) {
        cin >> nn;

        while (nn--) {
            cin >> s1 >> s2;
            if (fashion_item.find(s2) == fashion_item.end()) {
                fashion_item.insert({ s2, 1 });
            }
            else {
                fashion_item[s2]++;
            }
        }

        cnt = 1;
        for (auto i : fashion_item) {
            cnt *= i.second + 1;
        }
        
        res.push_back(cnt - 1);
        fashion_item.clear();
    }

    for (auto x : res) {
        cout << x << "\n";
    }

    return 0;
} // END