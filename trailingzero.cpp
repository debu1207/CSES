/*
 * cses.fi/problemset/task/1618
 */
#include <iostream>
#include <cstdint>
#include <climits>
using namespace std;

int main() {
	uint64_t n;
	cin >> n;
	uint64_t count = 0;
	long long powerOf5 = 5;

	while (n / powerOf5 >= 1) {
		count += n / powerOf5;

		if (powerOf5 > INT_MAX / 5) {
			break; 
		}
		powerOf5 *= 5;
	}

	cout << count << endl;
	return 0;
}
