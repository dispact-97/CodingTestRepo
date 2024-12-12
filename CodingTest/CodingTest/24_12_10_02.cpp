// ���� 1764
// https://www.acmicpc.net/problem/1764

#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ
	// ���ڵ尡 �߰��Ǹ� �ð��� 96ms���� 40ms���� �پ���

	map<string, bool> dMap;

	int N, M;
	string name;
	int count = 0;


	cin >> N;
	cin >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> name;
		dMap.insert({name,false});
	}

	map<string, bool>::iterator iter;
	for (int i = 0; i < M; i++)
	{
		cin >> name;
		if(dMap.find(name) != dMap.end())
		{
			dMap[name] = true;
			count++;
		}
	}

	cout << count<<"\n";
	for (auto it : dMap)
	{
		if (it.second != false)
		{
			cout << it.first << "\n";
		}
	}

	return 0;
}