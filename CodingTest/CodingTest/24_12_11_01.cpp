// 백준 1269
// https://www.acmicpc.net/problem/1269

#include <iostream>
#include <map>

using namespace std;

map<int, bool>Map1;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int n, m,temp;
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		Map1.insert({temp,false});
	}

	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		if(Map1.find(temp) != Map1.end())	//찾았다면
		{
			Map1.erase(temp);
		}
		else
		{
			Map1.insert({ temp,false });
		}
	}

	cout << Map1.size();

	return 0;
}