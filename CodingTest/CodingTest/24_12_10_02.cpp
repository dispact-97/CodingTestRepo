// 백준 1764
// https://www.acmicpc.net/problem/1764

#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화
	// 이코드가 추가되면 시간이 96ms에서 40ms까지 줄어든다

	map<string, bool> dMap;

	int N, M;
	string name;
	int count = 0;


	cin >> N;
	cin >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> name;
		dMap.insert({name,false});
	}

	map<string, bool>::iterator iter;
	for (int i = 0; i < M; i++)
	{
		cin >> name;
		if(dMap.find(name) != dMap.end())
		{
			dMap[name] = true;
			count++;
		}
	}

	cout << count<<"\n";
	for (auto it : dMap)
	{
		if (it.second != false)
		{
			cout << it.first << "\n";
		}
	}

	return 0;
}