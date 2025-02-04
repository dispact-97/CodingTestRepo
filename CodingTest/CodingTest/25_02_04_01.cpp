// ���� 1105 ��
// https://www.acmicpc.net/problem/1105

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	string L, R;

	cin >> L >> R;
	if (L.length() != R.length())
	{
		cout << 0;
		return 0;
	}

	int count = 0;
	for (int i = 0; i < L.length(); i++)
	{
		if (L[i] == R[i] && L[i] == '8')
		{
			count++;
		}
		else if (L[i] != R[i])
		{
			break;
		}
	}
	cout << count;

	return 0;
}