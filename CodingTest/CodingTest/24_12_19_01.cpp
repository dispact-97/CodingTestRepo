// 백준 12789
// https://www.acmicpc.net/problem/12789

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

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