// 백준 15439
// https://www.acmicpc.net/problem/15439

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

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