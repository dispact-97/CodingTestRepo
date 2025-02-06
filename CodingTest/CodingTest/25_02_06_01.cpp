// ���� 2512 ����
// https://www.acmicpc.net/problem/2512

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int N,m, res = 0, sum = 0;
	vector<int> vec;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	cin >> m;

	sort(vec.begin(), vec.end());

	int start = 0;
	int end = vec[N - 1];

	while (start <= end)
	{
		sum = 0;
		int mid = (start + end) / 2;
		for (auto i = 0; i < N; i++)
		{
			sum += min(vec[i], mid);
		}

		if (m >= sum)
		{
			res = mid;
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}

	}

	cout << res;

	return 0;
}