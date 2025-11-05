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
	uint64_t **input;
	cin >> t;
	input = new uint64_t*[t];
	for (unsigned int k = 0; k < t; k++)
		input[k] = new uint64_t[2];
	int i = 0;
	while (t--) {
		cin >> input[i][0] >> input[i][1];
		i++;
	}
	for (int j = 0; j < i; j++)
		cout << output(input[j][0], input[j][1]) << endl;
	return 0;
}
