#include <iostream>
#include <cstdint>
using namespace std;
const uint64_t M = 1000000007;

int main()
{
	uint64_t n;
	cin >> n;
	uint64_t x = 1;
	for (uint64_t i = 0; i < n; i++) {
		x *= 2;
		x %= M;
	}
	cout << x << endl;
	return 0;
}
