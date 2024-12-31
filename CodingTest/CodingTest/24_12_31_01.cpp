// 백준 27433
// https://www.acmicpc.net/problem/27433

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화


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