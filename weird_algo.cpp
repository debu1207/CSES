#include <iostream>
int main()
{
	unsigned long n;
	std::cin >> n;
	while (n != 1) {
		std::cout << n << " ";
		n = (n % 2) ? ( 3 * n + 1) : ( n / 2 ) ;
	}
	std::cout << 1 << std::endl;
	return 0;
}
