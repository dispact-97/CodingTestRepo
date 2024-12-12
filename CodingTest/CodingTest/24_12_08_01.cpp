// น้มุ 10815
// https://www.acmicpc.net/problem/10815

#include <iostream>
#include <map>
using namespace std;
map<int, bool>MAP;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int N = 0;
	int M = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int key = 0;
		cin >> key;
		MAP.insert({ key, true });
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int key = 0;
		cin >> key;
		if (MAP[key])
		{
			cout << 1 << " ";
		}
		else
		{
			cout << 0 << " ";
		}
	}

	return 0;
}