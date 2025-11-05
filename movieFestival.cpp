#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comparator(const pair<int,int> &a, const pair<int,int> &b) {
	return a.second < b.second;
}

int main()
{
	long long n;
	cin >> n;
	vector<pair<int,int>> movies(n);

	for (int i = 0; i < n; i++)
		cin >> movies[i].first >> movies[i].second;

	sort(movies.begin(), movies.end(), comparator);

	int count = 0;
	int last_end_time = 0;

	for (const auto& movie : movies) {
		int start_time = movie.first;
		int end_time = movie.second;
		if (start_time >= last_end_time) {
			count++;
			last_end_time = end_time;
		}
	}
	cout << count << endl;
	return 0;
}
