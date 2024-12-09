// ���� 1620
// https://www.acmicpc.net/problem/1620

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> dic; // ���ڿ��� Ű��, ������ ������ �����ϴ� map
string name[100001];  // �ε��� ������� ���ڿ��� �����ϴ� �迭
string str;           // �Է¹��� ���ڿ�

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int n = 0;
	int m = 0;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		dic.insert({ str, i }); // map�� ���ϸ� �̸��� ��ȣ ����
		name[i] = str;        // �迭�� �ε��� ��ȣ�� Ű�� ���ϸ� �̸� ����
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (isdigit(str[0]))	// �Է��� ���ڷ� �����ϴ��� �Ǵ�

		{
			cout << name[stoi(str)] << "\n";	
			// ������ ���, ���ڿ��� ������ ��ȯ �� �迭���� �ش� ��ȣ�� ���ϸ� �̸� ���

		}
		else
		{
			cout << dic.find(str)->second << "\n";
			// ���ڿ��� ���, map���� �ش� �̸��� ���ϸ� ��ȣ�� ã�� ���
		}
	}

	return 0;
}