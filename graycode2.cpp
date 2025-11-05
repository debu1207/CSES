#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

vector<string> generateGrayCode(int n) {
    vector<string> gray_code = {"0", "1"};

    for (int i = 2; i <= n; ++i) {
        vector<string> next_gray_code;

        for (const string& code : gray_code) {
            next_gray_code.push_back("0" + code);
        }

        for (auto it = gray_code.rbegin(); it != gray_code.rend(); ++it) {
            next_gray_code.push_back("1" + (*it));
        }

        gray_code = next_gray_code;
    }

    return gray_code;
}

int main() {
    int n;
    cin >> n;

    vector<string> gray_code_list = generateGrayCode(n);

    long long total_codes = 1LL << n;


    for (size_t i = 0; i < gray_code_list.size(); ++i) {
        cout << gray_code_list[i] << endl;
    }

    return 0;
}

