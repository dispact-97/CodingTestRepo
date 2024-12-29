// ���� 26069
// https://www.acmicpc.net/problem/26069

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int N = 0, count = 0;
	cin >> N;
	map<string, bool>m;
	string str1,str2;

	for (int i = 0; i < N; i++)
	{
		cin >> str1 >> str2;
		if (str1 == "ChongChong")
		{
			m.insert({ str1,true });
		}
		else if (str2 == "ChongChong")
		{
			m.insert({ str2,true });
		}

		if (m[str1])
		{
			m[str2] = true;
		}

		if (m[str2])
		{
			m[str1] = true;
		}

	}

	for (auto& val : m)
	{
		if (val.second)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}