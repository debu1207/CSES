#include <iostream>
#include <string>
#define uint unsigned int
using namespace std;
int main()
{
	string str;	
	uint n;
	uint ans = 1, tmp = 1;
	cin >> str;
	n = str.length();
	for(uint i = 1; i < n; i++) {
		if (str[i] == str[i-1])
			tmp++;
		else {
			ans = (ans <= tmp) ? tmp : ans;
			tmp = 1;
		}
	}
	ans = (ans <= tmp) ? tmp : ans;
	
	cout << ans << endl;


	return 0;
}
