// ���� 4949
// https://www.acmicpc.net/problem/4949

#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	while (1)
	{
		stack<char> word;
		string str;
		getline(cin, str);		// ������ �����ؼ� str�� �ִ� �Լ�

		if (str == ".")
		{
			break;				// ���α׷� ���� ó��
		}

		bool flag = 0;

		for (int i = 0; i < str.length(); i++)
		{
			char c = str[i];

			if ((c == '(') || (c == '['))
			{
				word.push(c);
			}
			else if (c == ')')
			{
				if (!word.empty() && word.top() == '(')
				{
					word.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else if (c == ']')
			{
				if (!word.empty() && word.top() == '[')
				{
					word.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 0 && word.empty())
		{
			cout << "yes" << '\n';
		}
		else
		{
			cout << "no" << '\n';
		}

	}

	return 0;
}