// ���� 1269
// https://www.acmicpc.net/problem/1269

#include <iostream>
#include <map>

using namespace std;

map<int, bool>Map1;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int n, m,temp;
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		Map1.insert({temp,false});
	}

	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		if(Map1.find(temp) != Map1.end())	//ã�Ҵٸ�
		{
			Map1.erase(temp);
		}
		else
		{
			Map1.insert({ temp,false });
		}
	}

	cout << Map1.size();

	return 0;
}