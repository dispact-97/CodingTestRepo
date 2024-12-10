// ���� 10816
// https://www.acmicpc.net/problem/10816

#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	map<int, int> Map;
	int n = 0;
	int m = 0;
	int temp = 0;

	cin >> n;
	while (n--)
	{
		cin >> temp;
		Map[temp]++;
	}

	cin >> m;
	while (m--)
	{
		cin >> temp;
		auto it = Map.find(temp);

		if (it != Map.end())
		{
			cout << it->second << ' ';
		}
		else
		{
			cout << "0" << ' ';
		}

	}

	return 0;
}