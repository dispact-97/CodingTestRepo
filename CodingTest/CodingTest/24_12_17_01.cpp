// ���� 9012
// https://www.acmicpc.net/problem/9012

#include <iostream>
#include <string>
#include <stack>

using namespace std;

string check(string input)
{
	stack<char> word;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '(')
		{
			word.push('(');
		}
		else
		{
			if (word.empty())
			{
				return "NO";
			}
			word.pop();
		}
	}

	if (word.empty())
	{
		return "YES";
	}
	else
	{
		return"NO";
	}


}

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int N = 0;
	string str;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		cout << check(str) << '\n';
	}

	return 0;
}