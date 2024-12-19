// 백준 18258
// https://www.acmicpc.net/problem/18258

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화


	int N;
	string str;
	queue<int> q;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;

		if (str == "push")
		{
			int temp;
			cin >> temp;
			q.push(temp);
		}
		else if (str == "pop")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size")
		{
			cout << q.size() << '\n';
		}
		else if (str == "empty")
		{
			if (q.empty())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if (str == "front")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << q.front() << '\n';
			}
		}
		else if (str == "back")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << q.front() << '\n';
			}
		}
	}


	return 0;
}