// ���� 15439
// https://www.acmicpc.net/problem/15439

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int N = 0;
	cin >> N;

	if (N == 1 || N < 1)
	{
		cout << 0;
	}
	else
	{
		N = N * (N - 1);
		cout << N;
	}

	return 0;
}