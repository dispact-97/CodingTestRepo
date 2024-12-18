// 백준 4949
// https://www.acmicpc.net/problem/4949

#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	while (1)
	{
		stack<char> word;
		string str;
		getline(cin, str);		// 공백을 포함해서 str에 넣는 함수

		if (str == ".")
		{
			break;				// 프로그램 종료 처리
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