// น้มุ 1934
// https://www.acmicpc.net/problem/1934

#include <iostream>

using namespace std;

int arr[1001];

int cal(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return cal(b, a % b);
	}
}

int main()
{
	int n, A, B;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> A >> B;
		arr[i] = A * B / cal(A, B);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}
