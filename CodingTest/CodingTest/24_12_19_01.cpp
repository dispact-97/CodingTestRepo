// ���� 12789
// https://www.acmicpc.net/problem/12789

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	stack<int> s;
	int N = 0, T = 0, count = 1;

	cin >> N;

	while (N--)
	{
		cin >> T;

		if (T == count)
		{
			count++;
		}
		else
		{
			s.push(T);
		}

		while (!s.empty() && s.top() == count)
		{
			s.pop();
			count++;
		}
	}

	if (s.empty())
	{
		cout << "Nice";
	}
	else
	{
		cout << "Sad";
	}

	return 0;
}