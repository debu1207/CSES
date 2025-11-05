/*
 * https://cses.fi/problemset/task/1084
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> a(n);
	vector<ll> b(m);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0 ;i < m; i++)
		cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int matches = 0, i = 0, j = 0;
	
	while (i < n && j < m) {
		if (b[j] < a[i] - k)
			j++;
		else if (b[j] > a[i] + k)
			i++;
		else {
			matches++;
			i++;
			j++;
		}
	}
	cout << matches << endl;
	return 0;
}
		
