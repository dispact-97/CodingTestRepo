// น้มุ 1037
// https://www.acmicpc.net/problem/1037

#include <iostream>

using namespace std;

void sort(int a[], int n)
{
	int i, j, m, t;
	for (i = 0; i < n; i++)
	{
		m = i;
		for (j = i; j < n; j++)
		{
			if (a[m] > a[j])
			{
				m = j;
			}
		}
		t = a[i];
		a[i] = a[m];
		a[m] = t;
	}
}


int main()
{
	int N = 0;
	int arr[51] = { 0, };

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, N);

	cout << arr[0] * arr[N - 1];

	return 0;
}