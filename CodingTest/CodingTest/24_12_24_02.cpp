// 백준 2346
// https://www.acmicpc.net/problem/2346

#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, int>> dq;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int N = 0, cnt = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		cin >> temp;
		dq.push_back(make_pair(temp, i + 1));
	}

	while (true)
	{
		int cnt = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();
		if (dq.empty())
		{
			break;
		}

		if (cnt > 0)
		{
			for (int i = 0; i < cnt - 1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for (int i = cnt; i << 0; i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}

	return 0;
}