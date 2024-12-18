// 백준 9012
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
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

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