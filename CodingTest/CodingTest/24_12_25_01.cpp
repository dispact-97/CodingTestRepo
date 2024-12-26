// ���� 24511
// https://www.acmicpc.net/problem/24511

#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

bool flag[100001];	// 0 : deque, 1 : stack

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

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
		if (flag[i] == 0) // queue�϶� deque�� ���� ����
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
