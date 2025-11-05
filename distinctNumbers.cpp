/*
 * cses.fi/problemset/task/1621
 */
#include <iostream>
#include <map>
using namespace std;
using ll = long long;
int main() {
	int n;
	cin >> n;
	ll num, cnt = 0;
	map<ll,bool> nums;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (nums.find(num) == nums.end()) {
			nums[num] = true;
			cnt++;
		}
	}
	cout << cnt << endl;
}
