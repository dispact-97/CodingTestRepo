// ���� 10870
// https://www.acmicpc.net/problem/10870

#include <iostream>

using namespace std;

int a = 0;
int b = 1;

int fibo(int n)
{
	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return fibo(n-2)+fibo(n-1);
}

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ


	int N = 0, res = 0;
	cin >> N;

	res = fibo(N);

	cout << res;

	return 0;
}
