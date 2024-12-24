// ���� 28279
// https://www.acmicpc.net/problem/28279

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ


	int N = 0, temp = 0, order = 0;
	cin >> N;

	deque<int> dq;

	for (int i = 0; i < N; i++)
	{
		cin >> order;

		switch (order)
		{
		case 1:
			cin >> temp;
			dq.push_front(temp);
			break;
		case 2:
			cin >> temp;
			dq.push_back(temp);
			break;
		case 3:
			if (!dq.empty())
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			else
			{
				cout << -1<<'\n';
			}
			break;
		case 4:
			if (!dq.empty())
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		case 5:
			cout << dq.size() << '\n';
			break;
		case 6:
			if (dq.empty())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
			break;
		case 7:
			if (!dq.empty())
			{
				cout << dq.front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
			break;

		case 8:
			if (!dq.empty())
			{
				cout << dq.back() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		default:
			break;
		}
	}

	return 0;
}