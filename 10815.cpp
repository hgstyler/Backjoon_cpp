// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10815, BJ Online Judge
// https://www.acmicpc.net/problem/10815

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(vector<int>& vec, int num) {
    int low = 0;
    int high = vec.size() - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (vec[mid] == num) {
            return true;
        }
        else if (vec[mid] > num) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, tmp;
    cin >> n;
    vector<int> given_numbers;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        given_numbers.push_back(tmp);
    }
    
    stable_sort(given_numbers.begin(), given_numbers.end());

    cin >> m;
    vector<bool> search_result;

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        search_result.push_back(binary_search(given_numbers, tmp));
    }

    for (int i = 0; i < m; ++i) {
        cout << search_result[i] << " ";
    }

    return 0;
} // END