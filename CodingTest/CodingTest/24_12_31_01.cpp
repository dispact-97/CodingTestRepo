// ���� 27433
// https://www.acmicpc.net/problem/27433

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ


	int N = 0;
	long long res = 1;
	cin >> N;

	for (int i = N; i > 0; i--)
	{
		res *= i;
	}

	cout << res;

	return 0;
}