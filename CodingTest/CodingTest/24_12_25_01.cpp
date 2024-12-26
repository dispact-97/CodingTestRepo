// 백준 24511
// https://www.acmicpc.net/problem/24511

#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

bool flag[100001];	// 0 : deque, 1 : stack

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int N = 0, M = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> flag[i];
	}

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		if (flag[i] == 0) // queue일때 deque에 원소 삽입
		{
			dq.push_back(x);
		}
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int y;
		cin >> y;
		dq.push_front(y);
		cout << dq.back() << " ";
		dq.pop_back();
	}

	return 0;
}
