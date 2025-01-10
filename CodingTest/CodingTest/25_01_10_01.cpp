// ���α׷��ӽ� �ùٸ���ȣ
// https://school.programmers.co.kr/learn/courses/30/lessons/12909?language=cpp
#include <iostream>
#include <string>
#include <stack>

using namespace std;

char dan[100000];

bool solution(string s)
{
	bool answer = true;
	stack<string> stc;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			stc.push("(");
		}
		else
		{
			if (stc.empty())
			{
				return false;
			}
			else
			{
				stc.pop();
			}
		}
	}

	if (!stc.empty())
	{
		answer = false;
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	cin >> dan;

	cout << solution(dan);

	return 0;
}