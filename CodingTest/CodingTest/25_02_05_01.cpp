// ���� 10431 �ټ����
// https://www.acmicpc.net/problem/10431

#include <iostream>
#include <algorithm>

using namespace std;

int students[20];

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int n = 0, num = 0, result = 0;
	cin >> n;

	for (int tc = 0; tc < n; tc++)
	{
		cin >> num;
		result = 0;
		for (int i = 0; i < 20; i++)
		{
			cin >> students[i];
		}

		for (int i = 0; i < 20; i++)
		{
			for (int j = i; j < 20; j++)
			{
				if (students[i] > students[j])
				{
					result += 1;
				}
			}
		}
			cout << num << ' ' << result << '\n';
	}


	return 0;
}