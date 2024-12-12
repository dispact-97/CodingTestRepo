// 백준 10816
// https://www.acmicpc.net/problem/10816

#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	map<int, int> Map;
	int n = 0;
	int m = 0;
	int temp = 0;

	cin >> n;
	while (n--)
	{
		cin >> temp;
		Map[temp]++;
	}

	cin >> m;
	while (m--)
	{
		cin >> temp;
		auto it = Map.find(temp);

		if (it != Map.end())
		{
			cout << it->second << ' ';
		}
		else
		{
			cout << "0" << ' ';
		}

	}

	return 0;
}