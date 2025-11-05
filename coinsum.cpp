/*
 * https://cses.fi/problemset/task/2183
 */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main() {
	int n;
	cin >> n;
	vector<int> values(n);
	for (int i = 0; i < n; i++) {
		cin >> values[i];
	}
	sort(values.begin(), values.end());
	ll rsum = 0;
	for (int i = 0; i < n; i++) {
		if (values[i] > rsum + 1) {
			break;
		}
		rsum += values[i];
	}
	cout << rsum + 1 << "\n";
	return 0;
}
