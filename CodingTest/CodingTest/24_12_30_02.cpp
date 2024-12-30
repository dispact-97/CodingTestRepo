// 백준 20920
// https://www.acmicpc.net/problem/20920

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	int N = 0, M = 0, max = 10;
	map<string, int> m;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str.size() >= M)
		{
			auto iter = m.find(str);
			if (iter != m.end())
			{
				iter->second++;
			}
			else
			{
				m.insert({ str,1 });
			}
		}
	}

	vector<pair<string, int>> vec(m.begin(), m.end());

	sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
		if (a.second != b.second)
		{
			return a.second > b.second; // 1. 자주 나오는 단어가 앞
		}
		if (a.first.size() != b.first.size())
		{
			return a.first.size() > b.first.size(); // 2. 단어 길이가 길수록 앞
		}
		return a.first < b.first; // 3. 알파벳 사전 순으로 앞에 있는 단어
		});

	// 결과 출력
	for (const auto& p : vec)
	{
		cout << p.first << '\n';
	}

	return 0;
}