// 백준 1105 팔
// https://www.acmicpc.net/problem/1105

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	string L, R;

	cin >> L >> R;
	if (L.length() != R.length())
	{
		cout << 0;
		return 0;
	}

	int count = 0;
	for (int i = 0; i < L.length(); i++)
	{
		if (L[i] == R[i] && L[i] == '8')
		{
			count++;
		}
		else if (L[i] != R[i])
		{
			break;
		}
	}
	cout << count;

	return 0;
}