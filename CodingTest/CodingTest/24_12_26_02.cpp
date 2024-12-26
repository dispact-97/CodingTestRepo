// น้มุ 24723
// https://www.acmicpc.net/problem/24723

#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	if (N == 1)
	{
		cout << 2;
	}
	else
	{
		int temp = 1;
		for (int i = 1; i <=N; i++)
		{
			temp *= 2;
		}
		cout << temp;
	}

	return 0;
}
