// น้มุ 10872
// https://www.acmicpc.net/problem/10872

#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	if (N == 0)
	{
		cout << 1;
	}
	else
	{
		int temp = N;
		for(int i = N; i > 1; i--)
		{
			temp *= (i - 1);
		}
		cout << temp;
	}

	return 0;
}