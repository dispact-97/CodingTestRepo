// 백준 28278	
// https://www.acmicpc.net/problem/28278

#include <iostream>
#include <stack>

using namespace std;


int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	stack<int> S;

	int N = 0;
	int temp;
	int num = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		switch (temp)
		{
		case 1:

			cin >> num;
			S.push(num);
			break;

		case 2:
			if (!S.empty())
			{
				cout << S.top() << '\n';
				S.pop();
			}
			else
			{
				cout << -1 << '\n';
			}
			break;
		case 3:
			cout << S.size() << '\n';
			break;

		case 4:
			if (!S.empty()) 
			{
				cout << 0 << '\n';
			}
			else
			{
				cout << 1 << '\n';
			}
			break;

		case 5:
			if (!S.empty())
			{
				cout << S.top() << '\n';
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
