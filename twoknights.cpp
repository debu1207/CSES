#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
	uint64_t n;
	cin >> n;
	for (uint64_t i = 1; i<=n; i++)
		cout << ((i - 1) * (i + 4) * (i*i - 3 * i + 4)) / 2 << endl;
	return 0;
}
