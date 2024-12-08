// น้มุ 14425
// https://www.acmicpc.net/problem/14425

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N = 0;
	int M = 0;
	int count = 0;
	cin >> N;
	cin >> M;

	vector<string>v1(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v1[i];
	}

	sort(v1.begin(), v1.end());

	string temp;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		if (binary_search(v1.begin(), v1.end(), temp))
		{
			count++;
		}
	}

	cout << count;

	return 0;
}