// ���� 1010
// https://www.acmicpc.net/problem/1010

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int T = 0, N = 0, M = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		long long result = 1;
		cin >> N;
		cin >> M;

		int r = 1;
		for (int j = M; j > M - N; j--)
		{
			result = result * j;
			result = result / r;
			r++;
		}

		cout << result << '\n';
	}

	return 0;
}