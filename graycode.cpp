/*
 * https://cses.fi/problemset/task/2205
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> getGrayCode(int n) {
	if (n == 0)
		return {""};
	vector<string> prevGray = getGrayCode(n - 1);
	vector<string> graycode;

	for (int i = 0; i < prevGray.size(); i++)
		graycode.push_back("0" + prevGray[i]);

	for (int i = prevGray.size() -1 ; i>=0; i--)
		graycode.push_back("1" + prevGray[i]);

	return graycode;
}

int main()
{
	int n;
	cin >> n;
	vector<string> graycode = getGrayCode(n);

	for (const string &code : graycode)
		cout << code << endl;

	return 0;
}
