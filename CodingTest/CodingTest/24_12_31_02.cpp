// 백준 10870
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
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화


	int N = 0, res = 0;
	cin >> N;

	res = fibo(N);

	cout << res;

	return 0;
}
