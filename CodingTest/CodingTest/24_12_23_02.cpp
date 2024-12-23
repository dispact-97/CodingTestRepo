// ���� 11866
// https://www.acmicpc.net/problem/11866

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int K = 0, N = 0;	// K��ŭ�� ������� N���� ������� ����
	cin >> N >> K;

	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	cout << "<";

	while (q.empty() == 0)
	{
		for (int i = 1; i < K; i++)
		{
			q.push(q.front());
			q.pop();
		}

		cout << q.front();

		if (q.size() >= 2)
		{
			cout << ", ";
		}

		q.pop();
	}

	cout << ">";

	return 0;
}