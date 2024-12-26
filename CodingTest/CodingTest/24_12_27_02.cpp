// น้มุ 11050
// https://www.acmicpc.net/problem/11050

#include <iostream>

using namespace std;

int facto(int x)
{
	int temp = 1;
	for (int i = 1; i <= x; i++)
	{
		temp *= i;
	}
	return temp;
}

int main()
{
	int N = 0, K = 0;
	cin >> N;
	cin >> K;

	if (N == 0 || K == 0)
	{
		cout << 1;
	}
	else if (K>N)
	{
		cout << 0;
	}
	else
	{
		int res = facto(N) / (facto(K) * facto(N - K));
		cout << res;
	}

	return 0;
}