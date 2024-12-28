// 백준 1010
// https://www.acmicpc.net/problem/1010

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

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