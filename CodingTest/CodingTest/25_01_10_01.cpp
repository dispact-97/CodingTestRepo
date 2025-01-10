// 프로그래머스 올바른괄호
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
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	cin >> dan;

	cout << solution(dan);

	return 0;
}