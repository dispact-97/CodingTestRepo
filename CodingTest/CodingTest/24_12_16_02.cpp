// 백준 10773
// https://www.acmicpc.net/problem/10773

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int K = 0;
	int res = 0;
	stack<int> S;

	cin >> K;

	while (K--)
	{
		int temp = 0;
		cin >> temp;
		if (temp == 0)
		{
			S.pop();
		}
		else
		{
			S.push(temp);
		}
	}

	while (!S.empty())
	{
		res += S.top();
		S.pop();
	}

	cout << res;

	return 0;
}