// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 10757, BJ Online Judge
// https://www.acmicpc.net/problem/10757

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    // __int64 a, b; // data type, size on C++ https://myblog.opendocs.co.kr/archives/1230 is not worked on BJ
    string a, b;
    int digit_sum;
    vector<int> num1, num2, sum;

    cin >> a >> b;
    if (b.size() > a.size()) {
        swap(a, b);
    }
    
    for (int cnt = 0; cnt < a.size(); cnt++) {
        num1.push_back(a[cnt] - '0');
    }
    for (int cnt = 0; cnt < b.size(); cnt++) {
        num2.push_back(b[cnt] - '0');
    }
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    for (int cnt = b.size(); cnt < a.size(); cnt++) {
        num2.push_back(0);
    }

    for (int cnt = 0; cnt < num1.size(); cnt++) {
        digit_sum = num1[cnt] + num2[cnt];
        if (digit_sum >= 10 && cnt != num1.size() - 1) {
            num1[cnt + 1]++;
            digit_sum -= 10;
        }
        sum.push_back(digit_sum);
    }
    vector<int>::iterator init = sum.begin();
    reverse(sum.begin(), sum.end());

    if (sum[0] >= 10) {
        sum[0] -= 10;
        sum.insert(init,1);
    }

    for (int cnt = 0; cnt < sum.size(); cnt++) {
        cout << sum[cnt];
    }

    return 0;
} // END