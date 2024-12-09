// น้มุ 1620
// https://www.acmicpc.net/problem/1620

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> dic;
string name[100001];
string str;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	int m = 0;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		dic.insert({ str,i });
		name[i] = str;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		m.insert({ str,i });

	}

		cin >> str;
		if (isdigit(str[0]))
		{
			cout << str[stoi(str)] << "\n";
		}
		else
		{
			cout << dic.find(str)->second << "\n";
		}
	return 0;
}