#include <iostream>
#include <cstdint>
using namespace std;

uint64_t output(uint64_t r, uint64_t c)
{
	uint64_t g = (r > c) ? r : c;
	uint64_t d = (g * (g - 1)) + 1; 

	if (r > c)
		return (r % 2 == 0) ? (d + r - c) : (d - r + c);
	else
		return (c % 2 == 0) ? (d - c + r) : (d + c - r);
}
int main()
{
	unsigned int t;
	cin >> t;
	while (t--) {
		uint64_t r, c;
		cin >> r >> c;
		cout << output(r, c) << endl;
	}
	return 0;
}
