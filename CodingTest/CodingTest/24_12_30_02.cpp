// ���� 20920
// https://www.acmicpc.net/problem/20920

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int N = 0, M = 0, max = 10;
	map<string, int> m;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str.size() >= M)
		{
			auto iter = m.find(str);
			if (iter != m.end())
			{
				iter->second++;
			}
			else
			{
				m.insert({ str,1 });
			}
		}
	}

	vector<pair<string, int>> vec(m.begin(), m.end());

	sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
		if (a.second != b.second)
		{
			return a.second > b.second; // 1. ���� ������ �ܾ ��
		}
		if (a.first.size() != b.first.size())
		{
			return a.first.size() > b.first.size(); // 2. �ܾ� ���̰� ����� ��
		}
		return a.first < b.first; // 3. ���ĺ� ���� ������ �տ� �ִ� �ܾ�
		});

	// ��� ���
	for (const auto& p : vec)
	{
		cout << p.first << '\n';
	}

	return 0;
}