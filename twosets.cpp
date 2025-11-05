#include <iostream>
#include <cstdint>
using namespace std;

void showsets(uint64_t n, uint64_t s)
{
	bool *num = new bool[n+1];
	uint64_t k = s /2;
	uint64_t *set1 = new uint64_t[n+1];
	uint64_t s1 = 0;
	uint64_t i;
	for (i = n; i>0; i--) {
		if (k <= i)
			break;
		k -= i;
		num[i] = true;
		set1[s1++] = i;
	}
	set1[s1] = k;
	num[k] = true;
	cout << s1 + 1<< endl;
	for (uint64_t m = 0; m < s1 + 1; m++)
		cout << set1[m] << " ";
	cout << endl;
	cout << n - s1 - 1 << endl;
	for (uint64_t m = 1; m < n+1; m++)
		if (num[m] == false)
			cout << m << " ";
	cout << endl;
}

int main() {
	uint64_t n;
	cin >> n;

	uint64_t s = (n * (n + 1 )) / 2;
	if (s % 2 == 0) {
		cout << "YES" << endl;
		showsets(n, s);
	}
	else
		cout << "NO" << endl;

	return 0;
}
