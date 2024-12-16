// ���� 10773
// https://www.acmicpc.net/problem/10773

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int K = 0;
	int res = 0;
	stack<int> S;

	cin >> K;

	while (K--)
	{
		int temp = 0;
		cin >> temp;
		if (temp == 0)
		{
			S.pop();
		}
		else
		{
			S.push(temp);
		}
	}

	while (!S.empty())
	{
		res += S.top();
		S.pop();
	}

	cout << res;

	return 0;
}