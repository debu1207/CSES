#include <iostream>
#include <stdint.h>

int main(void)
{
	uint64_t n;
	uint64_t *nums;
	uint64_t sum = 0;
	uint64_t expected;
	std::cin >> n;
	expected = (n * ( n + 1 ) ) / 2;
	nums = new uint64_t[n];
	for (uint64_t i = 0; i < n-1; i++) {
		std::cin >> nums[i];
		sum += nums[i];
	}

	std::cout << expected - sum << std::endl;
	return 0;
}
