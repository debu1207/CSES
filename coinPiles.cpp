/*
 *https://cses.fi/problemset/task/1754
 */
#include <iostream>
#include <cstdint>
using namespace std;
bool output(uint64_t a, uint64_t b){
	/*
	 * Since each move removes three coins, the total number of coins must be divisible by three
	 */
	if ((a+b) % 3 != 0)
		return false;
	uint64_t maxp = (a > b) ? a : b;
	uint64_t minp = (a < b) ? a : b;

	/*
	 * Each move removes at least one coin from each pile, so the number of coins in a pile
	 * must be at most twice the number of coins in the other pile
	 */
	if (maxp > 2 * minp)
		return false;
	return true;
}
int main()
{
	uint64_t n;
	cin >> n;
	uint64_t a, b;
	for (uint64_t i = 0; i < n; i++) {
		cin >> a >> b;
		if (output(a,b))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
